#include <stdio.h>

int main(void){

  int n;
  //prompting user for positive integer
  do{
    printf("Size: ");
    scanf("%i", &n);
  }while(n < 1);

  //printing an n-by-n grid of #
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      printf("#");
    }
    printf("\n");
  } 

}