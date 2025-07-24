#include <stdio.h>

int main() {
    // Write a C code where it reads the users input and outputs the negative numbers.
   
    int n; 
  
    printf("How many numbers will you type?  ");
    scanf("%d",&n);
    
    int vet[n];
    
    for (int i = 0; i < n; i++){
        printf("Type a number: ");
        scanf("%d",&vet[i]);
    }

  printf("\n Negative numbers:\n ");
  for (int i = 0; i < n; i++){
       if (vet[i] < 0){
       printf ("%d\n", vet[i]);
       }
 
 }
   
    return 0;
}
