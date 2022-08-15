#include <stdio.h>

int main() {
    double i, j;
    printf(" input two numbers you want to divide (x / y) : ");
    scanf("%lf, %lf", &i, &j);

    if (j ==0 ) {
        printf(" you cant divide by zero : zerodivisionerror \n");
        return 0;
    }

    printf(" result of %f divided by %f : %f \n", i, j, i/j);
    return 0;
}