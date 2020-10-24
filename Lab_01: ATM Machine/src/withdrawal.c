#include "atm.h"

int withdrawal_cash()
{
  extern int cash_deb;
  extern int withdraw_limit = 5000;
  volatile extern int funds_avl = 10000;
  volatile extern notes_avl = 1000;
  printf("Please enter the amount in multiples of 20\n");
  scanf("%d",&cash_deb);
  if(cash_deb<=withdraw_limit&&funds_avl)
  {
    if(cash_deb%100 != 0)
    {
      printf("Kindly enter the  amount in multiples of 100\n");
    } else {
      funds_avl =- cash_deb;
      notes_avl =- funds_avl/20;
      amount =- cash_deb;
      printf("Dispensing the Cash Please Wait...\n");
      printf("Please collect your cash and remove your card...\n");
      printf("Available balance is: ", amount);
    }
  } else if (cash_deb>withdraw_limit)
  {
    printf("You are withdrawing more than the daily limit of: ", withdraw_limit);
  } else if (cash_deb>amount)
  {
    printf("Insufficient funds in your account\n");
  } else if (cash_deb>funds_avl)
  {
    printf("Insufficient funds in ATM to dispense...\n");
  } else {
    printf("**NO CASH IN ATM**\n");
  }
}