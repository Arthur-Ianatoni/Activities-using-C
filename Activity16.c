#include <stdio.h>

int main() {
    // Create a C code that reads a matrix and outputs the main diagonal and the quantity of negative numbers. The matrix must have the same amount of columns and rows.
  
  int M, Negatives;
  
  printf("What size will your matrix be? ex(2= 2x2)\n");
  scanf("%d", &M);
  
  int matrix[M][M];
  
  for (int C = 0; C < M; C++){
      for (int R = 0; R < M; R++){
          printf("Value [%d,%d]: ", C, R );
          scanf("%d",  &matrix[C][R]);
      }
  }
    printf("Main diagonal values: ");
    for (int C = 0; C < M; C++){
          printf("%d ",matrix[C][C]);
       }
    
    printf(" ")  ; 
    Negatives = 0;
    
     for (int C = 0; C < M; C++){
        for (int R = 0; R < M; R++){
           if (matrix[C][R] < 0){
             Negatives ++;
           }
         }
     }
   
    printf("\nNegative numbers: %d\n", Negatives);
    return 0;
}
