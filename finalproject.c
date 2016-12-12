#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functionslibrary.h"

int main(int argc, char const *argv[]) {
//printf("Hello world %s!\n", argv[1] );
  // int semicolonPositionIterator=0;
  // int semicolonPosition[6]; //numero de ; en la estructura de pelicula
  // struct Movie mymovie;
  // FILE * fp;
  // char * line = NULL;
  // size_t len = 0;
  // ssize_t read;
  // struct Movie list_of_movies[NUM_MOVIES];
  // int listOfMoviesIterator=0;
  //
  // //printf("my movie.title: %s\n",mymovie.title);
  //
  // fp = fopen("movies.txt", "r");
  // if (fp == NULL)
  //     exit(EXIT_FAILURE);
  //
  // while ((read = getline(&line, &len, fp)) != -1) {
  //     // printf("Retrieved line of length %zu :\n", read);
  //     // printf("%s", line);
  //     for (size_t i = 0; i <= read-1; i++) {
  //       if (line[i]==';') {
  //         semicolonPosition[semicolonPositionIterator]=i;
  //         semicolonPositionIterator ++;
  //       }
  //     }
  //     for (size_t i = 0; i < semicolonPosition[0]; i++) {
  //       mymovie.title[i]=line[i];
  //     }
  //     printf("%s\n",mymovie.title);
  //
  //     for (int i = semicolonPosition[0]+1; i < semicolonPosition[1]; i++) {
  //       mymovie.genre[i-(semicolonPosition[0]+1)]=line[i];
  //     }
  //     printf("%s\n", mymovie.genre);
  //
  //     for (int i = semicolonPosition[1]+1; i < semicolonPosition[2]; i++) {
  //       mymovie.director[i-(semicolonPosition[1]+1)]=line[i];
  //     }
  //     printf("%s\n", mymovie.director);
  //
  //     char year[4];
  //     for (int i = semicolonPosition[2]+1; i < semicolonPosition[3]; i++) {
  //       year[i-(semicolonPosition[2]+1)]=line[i];
  //     }
  //     mymovie.year=atoi(year);
  //     printf("%d\n", mymovie.year);
  //
  //     int colonPosition[MAX_NUM_ACTORS];
  //     int colonPositionIterator=0;
  //     for(int i = semicolonPosition[3]+1; i < semicolonPosition[4]; i++){
  //       if (line[i]==':'){
  //         colonPosition[colonPositionIterator]=i;
  //         colonPositionIterator ++;
  //       }
  //     }
  //
  //     int numActors=colonPositionIterator+1;
  //     for(int i=0; i<numActors;i++){
  //       char actorInformation[MAX_CHAR_LENGTH]={'\0'};
  //       if(i==0){
  //         for (int j = semicolonPosition[3]+1; j < colonPosition[0]; j++) {
  //           actorInformation[j-(semicolonPosition[3]+1)]=line[j];
  //         }
  //       }
  //
  //       else if(i==(numActors-1)){
  //         for (int k = colonPosition[colonPositionIterator-1]+1; k < semicolonPosition[4]; k++) {
  //           actorInformation[k-(colonPosition[colonPositionIterator-1]+1)]=line[k];
  //         }
  //       }
  //       else{
  //         for (int h = colonPosition[i-1]+1; h < colonPosition[i]; h++) {
  //           actorInformation[h-(colonPosition[i-1]+1)]=line[h];
  //         }
  //       }
  //
  //       int plusPosition[2];
  //       int plusPositionIterator=0;
  //       for (int m = 0; m < strlen(actorInformation); m++) {
  //         if (actorInformation[m]=='+') {
  //           plusPosition[plusPositionIterator]=m;
  //           plusPositionIterator ++;
  //         }
  //       }
  //
  //       for (int l = 0; l < plusPosition[0]; l++) {
  //         mymovie.list_of_actors[i].name[l]=actorInformation[l];
  //       }
  //       // printf("nombre del actor %s\n",mymovie.list_of_actors[i].name);
  //
  //       char birthdateString[MAX_CHAR_LENGTH];
  //       for (int l = plusPosition[0]+1; l < plusPosition[1]; l++) {
  //         birthdateString[l-(plusPosition[0]+1)]=actorInformation[l];
  //       }
  //
  //       int slashPosition[2];
  //       int slashPositionIterator=0;
  //       for (int m = 0; m < strlen(birthdateString); m++) {//aqui hay m pq quiero
  //         if (birthdateString[m]=='/') {
  //           slashPosition[slashPositionIterator]=m;
  //           slashPositionIterator ++;
  //         }
  //       }
  //
  //       //convertir el dia (string-structure)
  //       char day[2]={'\0'};
  //       for (int m = 0; m < slashPosition[0]; m++) {
  //         day[m]=birthdateString[m];
  //       }
  //       mymovie.list_of_actors[i].birthdateActor.day=atoi(day);
  //
  //       //convertir el mes (string-structure)
  //       char month[2]={'\0'};
  //       for (int m = slashPosition[0]+1; m < slashPosition[1]; m++) {
  //         month[m-(slashPosition[0]+1)]=birthdateString[m];
  //       }
  //       mymovie.list_of_actors[i].birthdateActor.month=atoi(month);
  //
  //       //convertir el año (string-structure)
  //       char year[4]={'\0'};
  //       for (int m = slashPosition[1]+1; m < strlen(birthdateString); m++) {
  //         year[m-(slashPosition[1]+1)]=birthdateString[m];
  //       }
  //       mymovie.list_of_actors[i].birthdateActor.year=atoi(year);
  //
  //       for (int l = plusPosition[1]+1; l < strlen(actorInformation); l++) {
  //         mymovie.list_of_actors[i].nationality[l-(plusPosition[1]+1)]=actorInformation[l];
  //       }
  //       // printf("nacionalidad del actor %s\n",mymovie.list_of_actors[i].nationality);
  //       printf("Actor%d: %s %d/%d/%d %s\n",i, mymovie.list_of_actors[i].name,
  //                                             mymovie.list_of_actors[i].birthdateActor.day,
  //                                             mymovie.list_of_actors[i].birthdateActor.month,
  //                                             mymovie.list_of_actors[i].birthdateActor.year,
  //                                             mymovie.list_of_actors[i].nationality);
  //     }
  //
  //     // mymovie.description[semicolonPosition[5]]='\0';
  //     for (int i = semicolonPosition[4]+1; i < semicolonPosition[5]; i++) {
  //       mymovie.description[i-(semicolonPosition[4]+1)]=line[i];
  //     }
  //     printf("%s\n", mymovie.description);
  //
  //     char price[6];
  //     for (int i = semicolonPosition[5]+1; i <= read-1; i++) {
  //       price[i-(semicolonPosition[5]+1)]=line[i];
  //     }
  //     mymovie.price=atof(price);
  //     printf("%.2f €\n", mymovie.price);
  //
  //     list_of_movies[listOfMoviesIterator]=mymovie;
  //       listOfMoviesIterator ++;
  //
  // }
  // // Lectura de clientes
  // struct Client myclient;
  //
  // fp = fopen("clients.txt", "r");
  // if (fp == NULL)
  //     exit(EXIT_FAILURE);
  //
  // while ((read = getline(&line, &len, fp)) != -1) {
  //     // printf("Retrieved line of length %zu :\n", read);
  //     // printf("%s", line);
  //     int plusPosition[2];
  //     int plusPositionIterator=0;
  //      for (int m = 0; m <read; m++) {
  //        if (line[m]=='+') {
  //          plusPosition[plusPositionIterator]=m;
  //          plusPositionIterator ++;
  //        }
  //      }
  //
  //      char clientName[MAX_CHAR_LENGTH]={'\0'};
  //      for (int l = 0; l < plusPosition[0]; l++) {
  //        clientName[l]=line[l];
  //      }
  //      strcpy(myclient.name,clientName);
  //
  //      char birthdateString[MAX_CHAR_LENGTH];
  //      for (int l = plusPosition[0]+1; l < plusPosition[1]; l++) {
  //        birthdateString[l-(plusPosition[0]+1)]=line[l];
  //      }
  //
  //      int slashPosition[2];
  //      int slashPositionIterator=0;
  //      for (int m = 0; m < strlen(birthdateString); m++) {//aqui hay m pq quiero
  //        if (birthdateString[m]=='/') {
  //          slashPosition[slashPositionIterator]=m;
  //          slashPositionIterator ++;
  //        }
  //      }
  //
  //      //convertir el dia (string-structure)
  //      char day[2]={'\0'};
  //      for (int m = 0; m < slashPosition[0]; m++) {
  //        day[m]=birthdateString[m];
  //      }
  //      myclient.birthdateClient.day=atoi(day);
  //
  //      //convertir el mes (string-structure)
  //      char month[2]={'\0'};
  //      for (int m = slashPosition[0]+1; m < slashPosition[1]; m++) {
  //        month[m-(slashPosition[0]+1)]=birthdateString[m];
  //      }
  //      myclient.birthdateClient.month=atoi(month);
  //
  //      //convertir el año (string-structure)
  //      char year[4]={'\0'};
  //      for (int m = slashPosition[1]+1; m < strlen(birthdateString); m++) {
  //        year[m-(slashPosition[1]+1)]=birthdateString[m];
  //      }
  //      myclient.birthdateClient.year=atoi(year);
  //
  //      char clientId [MAX_CHAR_LENGTH]={'\0'};
  //      for (int l = plusPosition[1]+1; l < read; l++) {
  //        clientId[l-(plusPosition[1]+1)]=line[l];
  //      }
  //      strcpy(myclient.id,clientId);
  //      printf("Client: %s %d/%d/%d %s\n", myclient.name,
  //                                         myclient.birthdateClient.day,
  //                                         myclient.birthdateClient.month,
  //                                         myclient.birthdateClient.year,
  //                                         myclient.id);
  //   }
  //
  // fclose(fp);
  // if (line)
  //     free(line);

  MainMenu();

  return 0;
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
