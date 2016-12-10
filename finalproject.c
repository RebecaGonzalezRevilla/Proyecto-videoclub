#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CHAR_LENGTH 256
#define MAX_NUM_ACTORS 10
#define NUM_MOVIES 10
struct Date{
  int day;
  int month;
  int year;
};
struct Actor{
  char name[MAX_CHAR_LENGTH];
  struct Date birthdateActor;
  char nationality[MAX_CHAR_LENGTH];
};
struct Movie{
  char title[MAX_CHAR_LENGTH];
  char genre[MAX_CHAR_LENGTH];
  char director[MAX_CHAR_LENGTH];
  int year;
  struct Actor list_of_actors[MAX_NUM_ACTORS];
  char description[MAX_CHAR_LENGTH];
  float price;
};
struct Client{
  int id;
  char name[MAX_CHAR_LENGTH];
  struct Date birthdateClient;
};

void MainMenu();
void WatchOnline();
void ShowOnline();
void RentDvd();
void ShowRentals();
void ShowAvailability();
void ShowRentedByClients();

int main(int argc, char const *argv[]) {
//printf("Hello world %s!\n", argv[1] );
  int semicolonPositionIterator=0;
  int semicolonPosition[6]; //numero de ; en la estructura de pelicula
  struct Movie mymovie;
  FILE * fp;
  char * line = NULL;
  size_t len = 0;
  ssize_t read;

  //printf("my movie.title: %s\n",mymovie.title);

  fp = fopen("input.txt", "r");
  if (fp == NULL)
      exit(EXIT_FAILURE);

  while ((read = getline(&line, &len, fp)) != -1) {
      // printf("Retrieved line of length %zu :\n", read);
      // printf("%s", line);
      for (size_t i = 0; i <= read-1; i++) {
        if (line[i]==';') {
          semicolonPosition[semicolonPositionIterator]=i;
          semicolonPositionIterator ++;
        }
      }
      for (size_t i = 0; i < semicolonPosition[0]; i++) {
        mymovie.title[i]=line[i];
      }
      printf("%s\n",mymovie.title);

      for (int i = semicolonPosition[0]+1; i < semicolonPosition[1]; i++) {
        mymovie.genre[i-(semicolonPosition[0]+1)]=line[i];
      }
      printf("%s\n", mymovie.genre);

      for (int i = semicolonPosition[1]+1; i < semicolonPosition[2]; i++) {
        mymovie.director[i-(semicolonPosition[1]+1)]=line[i];
      }
      printf("%s\n", mymovie.director);

      char year[4];
      for (int i = semicolonPosition[2]+1; i < semicolonPosition[3]; i++) {
        year[i-(semicolonPosition[2]+1)]=line[i];
      }
      mymovie.year=atoi(year);
      printf("%d\n", mymovie.year);

      int colonPosition[MAX_NUM_ACTORS];
      int colonPositionIterator=0;
      for(int i = semicolonPosition[3]+1; i < semicolonPosition[4]; i++){
        if (line[i]==':'){
          colonPosition[colonPositionIterator]=i;
          colonPositionIterator ++;
        }
      }

      int numActors=colonPositionIterator+1;
      for(int i=0; i<numActors;i++){
        char actorInformation[MAX_CHAR_LENGTH]={'\0'};
        if(i==0){
          for (int j = semicolonPosition[3]+1; j < colonPosition[0]; j++) {
            actorInformation[j-(semicolonPosition[3]+1)]=line[j];
          }
        }

        else if(i==(numActors-1)){
          for (int k = colonPosition[colonPositionIterator-1]+1; k < semicolonPosition[4]; k++) {
            actorInformation[k-(colonPosition[colonPositionIterator-1]+1)]=line[k];
          }
        }
        else{
          for (int h = colonPosition[i-1]+1; h < colonPosition[i]; h++) {
            actorInformation[h-(colonPosition[i-1]+1)]=line[h];
          }
        }

        int plusPosition[2];
        int plusPositionIterator=0;
        for (int m = 0; m < strlen(actorInformation); m++) {
          if (actorInformation[m]=='+') {
            plusPosition[plusPositionIterator]=m;
            plusPositionIterator ++;
          }
        }

        for (int l = 0; l < plusPosition[0]; l++) {
          mymovie.list_of_actors[i].name[l]=actorInformation[l];
        }
        // printf("nombre del actor %s\n",mymovie.list_of_actors[i].name);

        char birthdateString[MAX_CHAR_LENGTH];
        for (int l = plusPosition[0]+1; l < plusPosition[1]; l++) {
          birthdateString[l-(plusPosition[0]+1)]=actorInformation[l];
        }

        int slashPosition[2];
        int slashPositionIterator=0;
        for (int m = 0; m < strlen(birthdateString); m++) {//aqui hay m pq quiero
          if (birthdateString[m]=='/') {
            slashPosition[slashPositionIterator]=m;
            slashPositionIterator ++;
          }
        }

        //convertir el dia (string-structure)
        char day[2]={'\0'};
        for (int m = 0; m < slashPosition[0]; m++) {
          day[m]=birthdateString[m];
        }
        mymovie.list_of_actors[i].birthdateActor.day=atoi(day);

        //convertir el mes (string-structure)
        char month[2]={'\0'};
        for (int m = slashPosition[0]+1; m < slashPosition[1]; m++) {
          month[m-(slashPosition[0]+1)]=birthdateString[m];
        }
        mymovie.list_of_actors[i].birthdateActor.month=atoi(month);

        //convertir el año (string-structure)
        char year[4]={'\0'};
        for (int m = slashPosition[1]+1; m < strlen(birthdateString); m++) {
          year[m-(slashPosition[1]+1)]=birthdateString[m];
        }
        mymovie.list_of_actors[i].birthdateActor.year=atoi(year);

        for (int l = plusPosition[1]+1; l < strlen(actorInformation); l++) {
          mymovie.list_of_actors[i].nationality[l-(plusPosition[1]+1)]=actorInformation[l];
        }
        // printf("nacionalidad del actor %s\n",mymovie.list_of_actors[i].nationality);
        printf("Actor%d: %s %d/%d/%d %s\n",i, mymovie.list_of_actors[i].name,
                                              mymovie.list_of_actors[i].birthdateActor.day,
                                              mymovie.list_of_actors[i].birthdateActor.month,
                                              mymovie.list_of_actors[i].birthdateActor.year,
                                              mymovie.list_of_actors[i].nationality);
      }


      for (int i = semicolonPosition[4]+1; i < semicolonPosition[5]; i++) {
        mymovie.description[i-(semicolonPosition[4]+1)]=line[i];
      }
      printf("%s\n", mymovie.description);

      char price[6];
      for (int i = semicolonPosition[5]+1; i <= read-1; i++) {
        price[i-(semicolonPosition[5]+1)]=line[i];
      }
      mymovie.price=atof(price);
      printf("%.2f €\n", mymovie.price);


  }

  fclose(fp);
  if (line)
      free(line);

  // int answer;
  // do{
  // printf("Main menu\n 1 – Watch an online movie\n 2 – Show online rentals\n 3 – Rent a DVD movie\n 4 – Show DVD rentals\n 5 – Show DVD availability\n 6 – Show online movies rented by a client\n7 – Exit");
  // printf("Please, select an option (1-7):"); //ToDo : rellenar con todo el menú
  //   scanf("%d",&answer );
  //   printf("You have chosen %d\n",answer);
  //   switch (answer) {
  //     case 1:
  //       WatchOnline();
  //       break;
  //     case 2:
  //       ShowOnline();
  //       break;
  //     case 3:
  //       RentDvd();
  //       break;
  //     case 4:
  //       ShowRentals();
  //       break;
  //     case 5:
  //       ShowAvailability();
  //       break;
  //     case 6:
  //       ShowRentedByClients();
  //       break;
  //     case 7:
  //       break;
  //     default:
  //       printf("Opcion no valida");//ToDo traducir
  //   }
  // }while(answer!=7); // igual que : == | distinto de : !=
  //




  return 0;
}

void WatchOnline(){
  // char anyKey;
  char expirationDate[MAX_CHAR_LENGTH];
  int cardNumber;
  char userName[MAX_CHAR_LENGTH];
  char continueAnswer;
  char title[MAX_CHAR_LENGTH];
  printf("Introduce the title of the movie\n");
  scanf(" %99[^\n]",title); // el 99 es para evitar problemas con el scanf y los espacios dentro de un bucle
  printf("The total price for %s movie is:", title); //ToDo precio
  printf("Do you want to continue (Y/N)\n");
  scanf(" %c",&continueAnswer);
  if (continueAnswer=='Y'||continueAnswer=='y') {
    printf("Introduce complete name\n");
    scanf(" %99[^\n]",userName);
    printf("Introduce your card number\n");
    scanf(" %d",&cardNumber);
    printf("Introduce the expiration date\n");
    scanf(" %s",expirationDate);
    printf("Great! The payment was successful. Now you are able to watch %s movie for 24h. Enjoy!\n",title);
    printf("Thank you for using our www.moviesclubagency.net :)\n");
    printf("Press any key to return to the main menu ......\n");
    // scanf(" %c",&anyKey);
    getc(stdin);// ToDo como hacer que vuelva presionando cualquier tecla
  }
}
void ShowOnline(){

}
void RentDvd(){

}
void ShowRentals(){

}
void ShowAvailability(){

}
void ShowRentedByClients(){

}
// for (size_t i = 0; i < count; i++) {
//   /* code */
// }
// int a = 0;
// while (a != 0) {
//   /* code */
// }
// do{
//   /* code */
// }while(a != 0);
