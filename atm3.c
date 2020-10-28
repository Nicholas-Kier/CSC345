#include <stdio.h>
#include <stdlib.h>

volatile int userPin = 3014;
int pinInput;
double userBalance = 5000;
int secondaryUserInput;
int userWithdraw;
int userDeposit;
double attempt = 0;
double userLimit = 1000;

double depositLimit = 10000;

int ATM_Machine(){

    int userInput;

    printf("Please select your option:\n\n");
    printf("1. Balanace inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit Cash\n");
    printf("4. Quit\n");
    printf("Enter your choice here: ");
    scanf("%d", &userInput);

    switch (userInput){
    
    case 1: //Balance
        printf("Your balance is: %.2f\n", userBalance);
        printf("Select 1 to return to the main menu, or 2 to quit\n");
        scanf("%d", &secondaryUserInput);
        if(secondaryUserInput == 1){
            ATM_Machine();
        }
        break;
    
    case 2: //Withdrawal
        printf("Please enter the amount you want to withdraw in multiples of 20: ");
        scanf("%d", &userWithdraw);
        if(userWithdraw <= userBalance){

            if(userWithdraw%20 != 0){
                printf("This machine only dispenses cash in multiples of 20\n");
            } else {
                userBalance = userBalance - userWithdraw;
                printf("Dispensing your cash. Please wait...\n");
                printf("Your bank balance is now: %lf\n", userBalance);
            }
            
            printf("Select 1 to return to the main menu, or 2 to quit\n");
            scanf("%d", &secondaryUserInput);

            if(secondaryUserInput == 1){
                ATM_Machine();
            }
        } else if (userWithdraw > userLimit) {
            printf("The are withdrawing more than the daily limit of: %.2f", userLimit);
        } else if (userWithdraw > userBalance) {
            printf("Insufficient funds in your bank account\n");
        } 
        printf("Select 1 to return to the main menu, or 2 to quit\n");
        scanf("%d", &secondaryUserInput);
        if(secondaryUserInput == 1){
            ATM_Machine();
            }
        break;

    case 3: //Deposit
        printf("Please enter the amount of cash you wish to depost: ");
        scanf("%d", &userDeposit);

        if(userDeposit <= depositLimit){
            if(userDeposit%20 != 0){
                printf("This machine only accepts cash in multiples of 20\n");
            } else {
                userBalance = userBalance + userDeposit;
                printf("Thank you for your deposit. Your updated balance is now: %.2f", userBalance);
            }
        }
        printf("Select 1 to return to the main menu, or 2 to quit\n");
        if(secondaryUserInput == 1){
            ATM_Machine();
        }
        break;
    case 4: //Quit
        printf("Thank you for using our ATM services. Have a nice day.");
        break;

    default:
        printf("Thank you for using our ATM services. Have a nice day.");
        exit(0);
    }
}

int main(){

  int i;
    printf("Welcome to the bank!\n");
    for(i = 0; i < 3; i++){
      printf("\nPlease enter your PIN number: ");
      scanf("%d", &pinInput);
      if(pinInput == userPin){
        ATM_Machine();
      } else {
        printf("\nPlease try again.");
      }
      if (i == 3){
      printf("You have entered the wrong PIN too many times.");
      exit(0);
    }
    }
}