#include <stdio.h>

int main() {
    // Write a C code that is capable of doing the sum of odd numbers whitin two numbers.
    
    int x, y, sum, exchange;
    printf("Input two numbers:\n ");
    scanf("%d %d", &x, &y);
   
    if ( x > y){
        exchange = x;
        x = y;
        y = exchange;
    }
   
    sum=0;
    for ( int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }
    
    printf("soma dos impares= %d\n", sum) ;
    
    return 0;
}
