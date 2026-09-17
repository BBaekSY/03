#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Enter numerator : ");
    scanf("%f", &a);

    printf("Enter denominator : ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Cannot divide by zero.\n");
        return 1;
    }

    printf("Result : %f\n", a / b);

    return 0;
}