#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functionslibrary.h"

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
  // FILE *fp;
  // char * line = NULL;
  // size_t len = 0;
  // ssize_t read;
  //
  // fp = fopen("clients.txt", "a");
  // if (fp == NULL){
  //     exit(EXIT_FAILURE);
  // }else{
  //   fprintf(fp "%s %d %s\n",userName,cardNumber,expirationDate);
  // }
  // fclose(fp);
  // if (line)
  //     free(line);
}
void ShowOnline(){
  char t1[]="Rogue One";
  	char t2[]="Iron Man";
  	char t3[]="Singin' in the rain";
  	char t4[]="Fantastic beasts and where to find them";
  	char t5[]="Doctor Strange";
  	char t6[]="Arrival";
  	char t7[]="Master and Commander";
  	char t8[]="Skyfall";
  	char t9[]="The Revenant";
  	char t10[]="Casino Royale";
  	char option[15];
    printf("Introduce the title of a movie: \n");
  	scanf(" %99[^\n]", option);
  	if(strcmp(t1, option)==0){
  		FILE* Rogueone= fopen ("movie1.txt", "r");
  		char RO;
  		if (Rogueone== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Rogueone)==0){
  			RO= getc(Rogueone);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t2, option)==0){
  		FILE* IronMan= fopen ("movie2.txt", "r");
  		char RO;
  		if (IronMan== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(IronMan)==0){
  			RO= getc(IronMan);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t3, option)==0){
  		FILE* Singin= fopen ("movie3.txt", "r");
  		char RO;
  		if (Singin== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Singin)==0){
  			RO= getc(Singin);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t4, option)==0){
  		FILE* Fanstastic= fopen ("movie4.txt", "r");
  		char RO;
  		if (Fanstastic== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Fanstastic)==0){
  			RO= getc(Fanstastic);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t5, option)==0){
  			FILE* Doctor= fopen ("movie5.txt", "r");
  		char RO;
  		if (Doctor== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Doctor)==0){
  			RO= getc(Doctor);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t6, option)==0){
  		FILE* Arrival= fopen ("movie6.txt", "r");
  		char RO;
  		if (Arrival== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Arrival)==0){
  			RO= getc(Arrival);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t7, option)==0){
  		FILE* Master= fopen ("movie7.txt", "r");
  		char RO;
  		if (Master== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Master)==0){
  			RO= getc(Master);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t8, option)==0){
  		FILE* Skyfall= fopen ("movie8.txt", "r");
  		char RO;
  		if (Skyfall== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Skyfall)==0){
  			RO= getc(Skyfall);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t9, option)==0){
  		FILE* Revenant= fopen ("movie9.txt", "r");
  		char RO;
  		if (Revenant== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Revenant)==0){
  			RO= getc(Revenant);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}else if(strcmp(t10, option)==0){
  		FILE* Casino= fopen ("movie10.txt", "r");
  		char RO;
  		if (Casino== NULL){
  			printf("the file cannot be opened");
  			};
  		while (feof(Casino)==0){
  			RO= getc(Casino);
  			printf("%c", RO);
  			}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  	}
}
void RentDvd(){
    char c;
  	char title [MAX_CHAR_LENGTH];
  	char name [MAX_CHAR_LENGTH];
  	float price, total;
  	int d1=0, d2=0, m1=0, y1=0, n, card, available=1, d3, m3, y3;
  	printf ("Introduce the title of the movie\n");
  	scanf (" %99[^\n]", title);
  	do{
  		do{
  			printf("introduce start date (dd/mm/yy)\n");
  			scanf("%i %i %i", &d1, &m1, &y1);
  			fflush(stdin);
  		}while ((d1<1 || d1>31) || (m1<1 || m1>12));
  		do{
  			printf ("Introduce the number of days\n");
   			scanf("%i", &n);
   			fflush(stdin);
  		}while (n<=0);
  	       printf("introduce the price per day");
  	      scanf("%f", &price);
  	       fflush(stdin);
  	        total= n*price;
  	         printf("the total price is %f\n", total);
  	}while (available==0);
  	fflush(stdin);
  	printf("do you want to continue(y/n)?\n");
  	scanf("%c", &c);
  	fflush(stdin);
  	printf("\n");
  	if (c!='y' || c!= 'Y'){
  		printf("Introduce complete name\n");
  		scanf("%[^\n]", name);
  		fflush(stdin);
  		printf("introduce card number\n");
  		scanf("%i", &card);
  		fflush(stdin);
  		printf("Introduce the expire date of the credit card(dd/mm/yy)\n");
  		scanf("%i %i %i", &d3, &m3, &y3);
  		d2= d1+n;
  		printf ("Great! The payment was successful. Please, get the DVD movie. You have to return the DVD movie next %i %i %i\n", d2, m1, y1);
  		}
  		printf("Press any key to return to the main menu ......\n");
      	getc(stdin);
  }
void ShowRentals(){

}
void ShowAvailability(){

}
void ShowRentedByClients(){

}

void MainMenu(){
  int answer;
  do{
  printf("Main menu\n 1 – Watch an online movie\n 2 – Show online rentals\n 3 – Rent a DVD movie\n 4 – Show DVD rentals\n 5 – Show DVD availability\n 6 – Show online movies rented by a client\n7 – Exit");
  printf("Please, select an option (1-7):");
    scanf("%d",&answer );
    printf("You have chosen %d\n",answer);
    switch (answer) {
      case 1:
        WatchOnline();
        break;
      case 2:
        ShowOnline();
        break;
      case 3:
        RentDvd();
        break;
      case 4:
        ShowRentals();
        break;
      case 5:
        ShowAvailability();
        break;
      case 6:
        ShowRentedByClients();
        break;
      case 7:
        break;
      default:
        printf("Not valid option");
    }
  }while(answer!=7); // igual que : == | distinto de : !=
}
