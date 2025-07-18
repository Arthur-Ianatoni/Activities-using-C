#include <stdio.h>
#include <string.h>
int main() {
    //Write a code that gives the smallest number between three numbers.
    
int a,b,c, smallest;
char sn[5];
 do {
   
   printf("Input your first number\n");
   scanf("%d", &a);
   
   printf("Input your second number\n");
   scanf("%d", &b);
   
   printf("Input your third number\n");
   scanf("%d", &c);
   
   smallest = a;
   if (b < smallest) smallest = b;
   if (c < smallest) smallest = c;
   
   printf("The smallest number is: %d\n", smallest);
   
   printf("Hi!do you wish to use this program? (yes/no)\n");
   scanf("%s", &sn);
   }
   
 while (strcasecmp(sn, "Yes") == 0);
    return 0;
}
