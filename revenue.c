#include <stdio.h>
#include <stdlib.h>

void Welcome();
void ItemInputs();
void Output();
void Goodbye();
int nPrice;
int nQuantity;

int main(){
  Welcome();
  ItemInputs();
  Output();
  Goodbye();
}

void Welcome()
{
  puts("Welcome to \"RAMS\" store\n");
}

void ItemInputs()
{
  printf("\tEnter item price: ");
  scanf("%d", &nPrice);

  if(nPrice <= 0)
  {
    printf("\n\tThis is not a valid item price.\n\tPlease run the program again\n");
    Goodbye();
  }

  printf("\tEnter quantity: ");
  scanf("%d", &nQuantity);

  if(nQuantity <= 0)
  {
    printf("\n\tThis is not a valid quantity order.\n\tPlease run the program again\n");
    Goodbye();
  }
}

void Output()
{
  unsigned int nCost = nPrice * nQuantity;
  float nDiscount;

  printf("\n\tThe item price is: $%.1f\n", (float)nPrice);
  printf("\tThe order is: %d item(s)\n", nQuantity);
  printf("\tThe cost is: $%.1f\n", (float)(nCost));

  if (nQuantity >= 1 && nQuantity <= 49)
  {
    nDiscount = 0;
  } 
  else if (nQuantity >= 50 && nQuantity <= 99)
  {
    nDiscount = 0.1;
  }
  else if (nQuantity >= 100 && nQuantity <= 149)
  {
    nDiscount = 0.15;
  }
  else 
  {
    nDiscount = 0.25;
  }

  printf("\tThe discount is: %.1f%%\n", (nDiscount * 100.0f));

  float nDiscountTotal = ((nDiscount * (float)(nPrice)) * nQuantity);
  printf("\tThe discount amonut is: $%.1f\n", (nDiscountTotal));

  float nTotal = nCost - nDiscountTotal;
  printf("\tThe total is: $%.1f\n", (nTotal));
  
}

void Goodbye()
{
  puts("\nThank You for using \"RAMS\" store\n");
  exit(0);
}