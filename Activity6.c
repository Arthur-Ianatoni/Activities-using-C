#include <stdio.h>

int main() {
    // Write a code that reads the grade of a student.
    int first, second;
    double mean;
  
  //get the grades
   printf("Input your score:  ");
   scanf ("%d", &first);
   
   printf("Input your second score:  ");
   scanf ("%d", &second);
 
  //divide them
   mean = (first + second)/2.0;

  // using if to determine wheter the student get an A,B,C...  
   if (mean >= 90.00){
   printf("Your Grade is A!");
   }
   else if ( mean >= 80.00){
   printf("Your grade is B!");    
   }
   else if (mean >= 70.00){
   printf("Your grade is C!");
   }
   else if (mean>= 60.00){
   printf ("Your grade is D! You'll do better next time.")  ;
   }
   else {
       printf("Your grade is F, you'll do better next time.");
   }
   //releasing the score to the student.
    printf(" Your actual score is: %.2lf", mean);
 
   return 0;
}
