#include <stdio.h>

int main(void){

  int n;
  //prompting user for positive integer
  do{
    printf("Size: ");
    scanf("%i", &n);
  }while(n < 1 || n > 8);

  
  //printing a pyramid right oriented 
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n - i - 1; j++){
      printf(" ");
    }
    for (int k = 0; k < i + 1; k++){
      printf("#");
    }
    printf("\n");
  } 

}