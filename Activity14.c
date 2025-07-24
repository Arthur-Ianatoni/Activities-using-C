#include <stdio.h>

int main() {
    // Write a C code that reads # numbers, get the values, its sum, and mean. 
    
    int N;
    double mean, sum;
    
   //User's decision of how many numbers he will input 
    printf("How many numbers will you input?\n");
    scanf("%d",&N);
    
    double vet[N];
    
   //scanning the numbers
    for ( int i = 0; i < N; i++){
        printf("Type the number: ");
        scanf("%lf", &vet[i]);
    }
    printf("\n");
    //the values
    printf("The values: ");
    for ( int i = 0; i < N; i++){
        printf("%.1lf  ", vet[i]);
    }
   //sum
    for ( int i = 0; i < N; i++){
    sum = sum + vet[i];
    }    
    printf("\nSum: %.2lf\n", sum);
   //mean 
     
    mean = sum / N;
    printf("media = %.2lf\n", mean);
   
    return 0;
}
