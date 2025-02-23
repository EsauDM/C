#include <stdio.h>

/*int main(void){
  int i = 0;
  while(i < 3){
    printf("Meow \n");
    i++;
  }
}*/
//creating a function for the meow
/*void meow(void);

int main(void){
  for (int i = 0; i < 3; i++){
    meow();
  }
}

void meow(void){
  printf("meow\n");
}*/

//building it in a more efficient way
void meow(int n);

int main(void){
  meow(4);
}

void meow(int n){
  for (int i = 0; i < n; i++){
    printf("meow\n");
  }
}