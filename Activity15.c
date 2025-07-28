int main() {
    int N, minors = 0;
    double hsum = 0, mean, percentminors;

    printf("Type the number of people: ");
    scanf("%d", &N);

    char names[N][50];
    int age[N];
    float height[N];

    for (int i = 0; i < N; i++) {
        printf("Person %d\n", i + 1);

        while (getchar() != '\n'); //used to clean "\n"

        printf("Name: ");
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // remover '\n'
        
        printf("Age: ");
        scanf("%d", &age[i]);
       

        printf("Height(cm): ");
        scanf("%f", &height[i]);
       

        hsum += height[i]; // that's like adding the orignal value of hsum with height[i]!

        if (age[i] < 16) {
            minors++;
        }
    }

    mean = hsum / N;
    percentminors = minors * 100.0 / N;

    printf("\nAverage height: %.2lf\n", mean);
    printf("Persons below 16: %.1lf %%\n", percentminors);
    
    
    for ( int i = 0; i < N; i++){ //showing who's below 16.
        if( age[i] < 16){
            printf ("%s\n", names[i]);
        }
    }
    
    

    return 0;
}
