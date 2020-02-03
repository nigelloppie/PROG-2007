//Write a program that accepts two integers values typed in by the user
//Display the results of dividing the first integer by the second
//to three-decimal-place accuracy Remember to have teh program check for division by zero
#include <stdio.h>
int main () {

    float num1,num2;

    printf("Enter a dividend: ");
    scanf("%f", &num1);

    printf("Enter a divisor: ");
    scanf("%f", &num2);
    if (num2 == 0.0f) {
        printf("Divide by zero error.\n");
    } else {
        printf("%.3f / %.3f = %.3f\n", num1, num2, num1 / num2);
    }

    return 0;
}