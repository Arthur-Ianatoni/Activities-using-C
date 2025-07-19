#include <stdio.h>

int main() {
    // Write a C code where it reads and compares two numbers and tells if the orders is increasing or decreasing 
  int Age, n, sum;
  double average;
  
  printf("type the ages. ( to stop, input a negative number)\n");
  scanf("%d",&Age);
  n = 0;
  sum = 0;
  while ( Age >= 0) {
      sum = (double) sum + Age;
      n = n + 1;
      scanf("%d", &Age);
  }
 
 if ( n == 0) {
     printf("Impossible to calculate it!");
 }
 else {
     average = sum / n;
     printf(" Avarage= %.2lf", average);
 } 
 
    return 0;
}
