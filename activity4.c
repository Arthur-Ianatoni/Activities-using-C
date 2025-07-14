 //A program that can calculate the area, perimeter and the diagonal of a rectangle.
    #include <stdio.h>
    #include <math.h>
    int main() {
 
   //Variables
    double base, high, area , perimeter, diagonal;
   //users input 
    printf ("type the rectangle base: \n");
    scanf("%lf", &base);
      
    printf("type the rectangle high:\n");
    scanf("%lf", &high);
    //calculus
    area = base * high;  
    perimeter = 2 * ( base + high);  
    diagonal = sqrt(base * base + high * high);
   //Outputs.
    printf ( "Area = %.4lf\n", area);
    printf ( "Perimeter = %.4lf\n", perimeter);
    printf ( "Diagonal = %.4lf\n", diagonal);
      
    return 0; 
}
