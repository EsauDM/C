#include <stdio.h>

/*int add(int a, int b);
int main(void){
    int x;
    int y;
    printf("x: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%d", &y);

    printf("The answer is %i\n", add(x,y));
}

int add(int a, int b){
  return a + b;
} */


int main(void){
  int x;
  int y;
  printf("x: ");
  scanf("%i", &x);
  printf("y: ");
  scanf("%d", &y);
  
  double z = (double) x / (double) y; //type casting to avoid truncation

  printf("The answer is %.20f\n", z);
}