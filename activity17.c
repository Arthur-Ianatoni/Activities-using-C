#include <stdio.h>
//create a C code that reads a matrix, sums them and split the matrix into two or more vectors.
int main() {
    int Rows, Columns;

    printf("How many columns do you want? ");
    scanf("%d", &Columns);
    printf("How many rows do you want? ");
    scanf("%d", &Rows);

    double matrix[Rows][Columns]; 
    double vet[Columns];

  
    for (int i = 0; i < Columns; i++) {
        printf("Input the numbers for the Column %d:\n", i + 1);
        for (int j = 0; j < Rows; j++) {
            scanf("%lf", &matrix[j][i]);  
    }

  
    for (int i = 0; i < Columns; i++) {
        vet[i] = 0;
        for (int j = 0; j < Rows; j++) {
            vet[i] += matrix[j][i];  
        }
    }

    
    printf("Vetor generated:\n");
    for (int i = 0; i < Columns; i++) {
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
