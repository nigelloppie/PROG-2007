#include <stdio.h>
#include <stdint.h>

int main() {

    float celsius;
    float Fahrenheit;

//    fahrenheit = 20.0f;
    printf("Enter degrees in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    celsius = (Fahrenheit - 32.0f) / 1.8f;

    printf("%fF = %fC\n", Fahrenheit, celsius);

    return 0;
};

// Implicit - 'C' converting number for you. (e.g. integers into floats)
// Explicit you telling 'C' how to convert (e.g. floats into integers)