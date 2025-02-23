#include <stdio.h>


int main(){ // user input and print output.
  char answer[60];   
  printf("What's your name? \n");
  fgets(answer,sizeof(answer),stdin);
  printf("Hello, %s \n", answer);
}