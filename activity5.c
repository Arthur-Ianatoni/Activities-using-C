
#include <stdio.h>
#include <string.h>

// Create a program that reads the name of two persons and calculate the mean of their ages.

int main() {
    int Age1, Age2;
    char name1[50], name2[50];
    float mean;

    printf("Type the first person's name: \n");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Type the age: \n");
    scanf("%d", &Age1);
    getchar();

    printf("Type the second person's name: \n");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    printf("Type the age: \n");
    scanf("%d", &Age2);

    mean = (Age1 + Age2) / 2.0;

    printf("The mean between the person %s and the person %s is %.2f\n", name1, name2, mean);

    return 0;
}
// This one here was a little bit harder, Yes, I used a little bit of chat gpt to learn how getchar(); and fgets works. Also enhance my organization in the line 29.
