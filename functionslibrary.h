#include <stdio.h>

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
  char id[MAX_CHAR_LENGTH];
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
