//Write a program that calculate the sum of the digits of an integer
//The program should accept an arbitrary integer typed in by he user.

#include <stdio.h>
int main () {
    int num = 0;

    printf("Enter an integer: ");
    scanf("%i", &num);

    int sum = 0;
    int digit = 0;
    while (num > 0) {
        digit = num % 10;
        printf("%i ",digit);
        sum += digit;
        num /= 10;
    }
    printf("sum = %i\n", sum);
    return 0;
}