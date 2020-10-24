#include <stdio.h>
#include <stdlib.h>


void pinValidation()
{
  printf("Please enter your 4 digit pin number:\n");
  int valid_pin = 3014;
  int pin_input;
  int banking_function;
  int num_of_attempts = 0;
  scanf("%d",&pin_input);
  int validation = strcmp(valid_pin, pin_input);

  if(validation == 0)
  {
    printf("User Validated");
    printf("\nWelcome to ATM Machine\n");
    printf("\nPlease select one of the following: ");
    printf("\n 1. Balance Check\n 2. Withdrawal\n 3. Deposit Cash\n 4. Quit\n");
    scanf("%d", &banking_function);
    switch(banking_function)
    {
      case 1:
        printf("You selected balance check:\n");
        goto balance();
        break;
      case 2:
        printf("You have selected WITHDRAWAL:\n");
        goto withdrawal();
        break;
      case 3:
        printf("You have selected DEPOSIT\n");
        goto deposit();
        break;
      case 4:
        printf("You have selected QUIT\n");
        break;
      default:
        printf("Invalid input\n");
    }
  } else {
    while(num_of_attempts<3)
    {
      if(valid_pin!=3014)
      {
        printf("INVALID PIN\n");
        num_of_attempts++;
      }
    }
    if(num_of_attempts==3)
    {
      printf("Quit\n");
    }
  }

}