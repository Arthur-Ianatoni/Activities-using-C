#include <stdio.h>
 int main() {

double width, lenght, cost, price, area;

printf (" Input the land's width: "); 
scanf("%lf", &width);

printf (" Type the land's lenght: ");  
scanf("%lf", &lenght);

printf(" Type the cost of the land per square meter: ");
scanf("%lf", &cost);

area = width * lenght;
price = cost * area; 

printf(" land area: %.2lf \n", area);
printf("  price of the land: %.2lf\n", price );
  return 0; 
 }

//Create a program that can read the width and lenght of a recutngular land. Also, set its price by calculating its value per square meter. 
// This is kind of a homework, It's an activity passed by my course teacher. 
