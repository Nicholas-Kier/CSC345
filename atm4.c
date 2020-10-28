#include <stdio.h>
#include <stdlib.h>

int PIN_Authentication(){
  int userPIN = 3014;
  int userPINInput;
  int i;

  for(i = 0; i < 3; i++){
    printf("Please enter your PIN: ");
    scanf("%d", &userPINInput);
    if(userPINInput == userPIN){
      return 1;
    } else {
      printf("Invalid PIN. Please try again.");
    }
  }
  if(i==3){
    printf("Exceeded nubmer of attempts. Shutting down");
    exit(0);
  }
  return 1;
}

int main(){
  while(1){
    printf("successful.");
  }
}