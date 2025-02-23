#include <stdio.h>

int main(void){
    int x; //assigns number variables.
    int y;
    printf("Enter your first value: \n"); 
    scanf("%i", &x); //gets the user input using the scanf function and assigns it to the variable x using a pointer &x.
    printf("Enter your second value: \n");
    scanf("%d", &y); //does the same as the last step.
    
    if(x < y){
      printf("x is less than y\n"); //if the x value is less than the y value it prints this one.
    }else if(y < x){
      printf("y is less than x\n"); //if the y value is less than the x value it prints this one.
    }else{
      printf("x is equal to y\n"); //if they're equal it prints this one.
    }
}