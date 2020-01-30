#include <stdio.h>

int main() {

    // implicit conversion
    int num = 125;
    float flt = num;

    printf("num = %i, flt = %f\n", num, flt);


    // Explicit conversion
    float pi = 3.14159f;
    int not_pi;

    not_pi = (int)pi;

    printf("pi = %f, not_pi =%i\n",pi, not_pi);
    return 0;
}