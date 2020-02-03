//Write a program that calculate the sum of the digits of an integer
//The program should accept an arbitrary integer typed in by he user.

#include <stdio.h>
int main () {
    int num = 0;

    printf("Enter an integer: ");
    scanf("%i", &num);


    int sum = 0;
    int digit = 0;
    int temp = num;
    int num_digits = 0;
    while (temp > 0) {
        digit = temp % 10;
        printf("%i ",digit);
        sum += digit;
        temp /= 10;

        num_digits++;
    }

    printf("sum = %i\n", sum);

    int reversed_num = 0;

    temp = num;
    for (int place_holder = num_digits; place_holder > 0; place_holder--){
        digit = num % 10;
        reversed_num += digit;
        if (place_holder > 1) {
            reversed_num *= 10;
        }
        num /= 10;
    }printf("reversed num = %i\n", reversed_num);
    while(reversed_num > 0) {
        digit = reversed_num %10;
        printf("%i", digit);
        reversed_num /=  10;
    }
    printf(" = %i\n", sum);

    return 0;
}