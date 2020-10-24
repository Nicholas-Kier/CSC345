#include "atm.h"

int deposit_cash()
{
  extern int cash_cr = 0;
  extern int deposit_limit = 10000;
  extern int return_notes = 0;
  printf("Please enter the cash in multiples of 20]n");
  scanf("%d",&cash_cr);
  if(cash_cr<=deposit_limit)
  {
    if(cash_cr%20 != 0)
    {
      printf("Please enter the depost in multiples of 20]n");
    } else {
      funds_avl =+ cash_cr;
      notes_avl =+ funds_vl/20;
      if(notes_avl == 1000)
      {
        printf("No more notes can be added\n");
        return_notes = cash_cr/100;
        printf("%d notes are returned...", return_notes);
      }
      amount =+ cash_cr;
      printf("Adding the cash. Please wait...\n");
      printf("Available Balance is: ", amount);
    }
  }
}