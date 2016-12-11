#include <stdio.h>
#include <string.h>
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
