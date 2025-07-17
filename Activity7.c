// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
// This code here can solve quadratic equation (through a brazilian method.)
int main() {
    
    double a, b, c, delta, x1, x2;
//read the variables    
printf("Input coeficient a: ");
scanf("%lf",&a);

printf("Input coeficient b: ");
scanf("%lf",&b);

printf("Input coeficient c: ");
scanf("%lf",&c);
    
    
delta = b * b - 4 * a * c; 

if ( a == 0 || delta <= -1.00){
    printf ("This equation does not has real roots\n");
}
else {
  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);
}
 
 printf("X1: %.4lf and X2: %.4lf", x1, x2);   
    
    return 0;
}
