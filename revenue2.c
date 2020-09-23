#include <stdio.h>
#include <stdlib.h>

int main(){

  int Price; 
  int Quantity;
  int temp;

  int priceInput;
  int QuantityInput;

  printf("Welcome to the \"RAMS\" store\n");

  printf("\n\tEnter item price: ");
  priceInput = scanf("%d", &Price);
  while(priceInput!=1 || priceInput <= 0)
  {
    while((temp = getchar()) != EOF && temp != '\n');
    printf("\n\tThis is not a valid item price.\n\tPlease run the program again\n");
    printf("\nThank you for using \"RAMS\" store\n");
    exit(0);
    //priceInput = scanf("%d", &Price);
  }

  printf("\n\tEnter quantity: ");
  QuantityInput = scanf("%d", &Quantity);
  while(QuantityInput!=1)
  {
    while((temp = getchar()) != EOF && temp != '\n');
    printf("\n\tThis is not a valid quantity order.\n\tPlease run the program again\n");
    printf("\nThank you for using \"RAMS\" store\n");
    exit(0);
    //QuantityInput = scanf("%d", &Quantity);
  }
  
  
  //printf("Your price is: %d\n", Quantity);


  /*printf("\tEnter quantity: ");
  scanf("%d", &Quantity);

  if (Quantity <= 0)
  {
    printf("\n\tThis is not a valid quantity order.\n\tPlease run the program again\n");
    printf("\nThank you for using \"RAMS\" store\n");
    exit(0);
  }
  */

  unsigned int Cost = Price * Quantity;
  float discount;

  printf("\n\tThe item price is: $%.2f\n", (float)Price);
  printf("\tThe order is: %d item(s)\n", Quantity);
  printf("\tThe cost is: $%.2f\n", (float)(Cost));

  if (Quantity >= 1 && Quantity <= 49)
  {
    discount = 0;
  }
  else if (Quantity >= 50 && Quantity <= 99)
  {
    discount = 0.1;
  }
  else if (Quantity >= 100 && Quantity <= 149)
  {
    discount = 0.15;
  }
  else 
  {
    discount = 0.25;
  }

  printf("\tThe discount is: %.2f%%\n", (discount * 100.0f));

  float discountTotal = ((discount * (float)(Price)) * Quantity);
  printf("\tThe discount amount is: $%.2f\n", discountTotal);

  float total = Cost - discountTotal;
  printf("\tThe total is: $%.2f\n", (total));

  printf("\nThank you for using \"RAMS\" store\n");
  exit(0);
}
