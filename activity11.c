#include <stdio.h>

int main() {
    //that is a C code capable of creating a multiplication table.
    
    int n, i, product;
    
    printf("Which number do you want to get its multiple table?\n");
    scanf("%d", &n);
    
    for (i = 1; i <= 10; i++){
        product = n * i;
        printf(" %d * %d = %d\n",n,i,product);
    }
    printf("End!\n");
    
    return 0;
}
