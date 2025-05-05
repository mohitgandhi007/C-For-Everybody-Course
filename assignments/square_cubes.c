#include <stdio.h>

// Function prototypes
double square(double x);
double cube(double x);

// Main function
int main(void) {
    int how_many, i, j;
    double val;

    printf("I want square and cube from 1 to n where n is: ");
    scanf("%d", &how_many);

    printf("\nValue\tSquare\tCube\n");
    printf("-----------------------------\n");

    for (i = 1; i <= how_many; i++) {
        for (j = 0; j < 10; j++) {
            val = i + j / 10.0;
            printf("%.1lf\t%.2lf\t%.2lf\n", val, square(val), cube(val));
        }
    }

    return 0;
}

// Square function
double square(double x) {
    return x * x;
}

// Cube function
double cube(double x) {
    return x * x * x;
}
