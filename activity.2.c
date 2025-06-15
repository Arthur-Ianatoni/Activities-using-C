 //for this activity, what I am doing is creating a program that tells if the number that the person input is even or odd.
 
 
#include <stdio.h> 

int main(){

   int numero;

printf(" Type your number: \n");
scanf("%d",&numero);

if(numero %2==0) {
 printf(" your number is even"); 
  }
 else{
printf("your number is odd"); 
 }
 return 0;  
}
