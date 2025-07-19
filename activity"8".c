#include <stdio.h>

int main() {
    // Write a C code where it reads and compares two numbers and tells if the orders is increasing or decreasing 
  int a, b;
  
  do {
     printf ("Input the first number\n");
     scanf("%d", &a);
     printf(" Input the second number\n");
     scanf("%d", &b);
     
    if (a > b){
    printf("The order is decreasing\n");
     }
    else if ( a < b) {
    printf("The order is increasing\n");
     }
    else {
    printf("They are the same! ");
    }
  }
    while ( a != b);
    return 0;
}
