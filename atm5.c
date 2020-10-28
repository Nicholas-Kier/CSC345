#include <stdio.h>
#include <stdlib.h>

int PIN_Authentication(){
  int PIN = 3014;
  int pinInput;

  for(int i = 0; i < 3; i++){
    printf("\nPlease enter your PIN number: ");
    scanf("%d", &pinInput);
    if(pinInput == PIN){
      return 1;
    } else {
      printf("Incorrect PIN. Please try again.");
    }
    if(i == 3){
      printf("Too many attempts. Closing program.");
      exit(0);
    }
  }
  return 1;
}

int main(){
  while(1){
    printf("Successful.");
  }
}