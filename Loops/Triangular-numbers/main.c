#include <stdio.h>
int main() {

    // calculate the fifth triangular number
//    int i = 0;
    int triangular_number = 0;
//
//    for ( ; triangular_number < 15; )  {
//        i++;
//        triangular_number += i;
//    }
//
//    printf("The fifth triangular number is %i\n",triangular_number);

    int i = 1;
    while (i <= 5) {
        triangular_number += i;
        i++;
    }

    int i = 1;
    do (i <= 5) {
        triangular_number += i;
        i++;
    }
        printf("The fifth triangular number is %i\n",triangular_number);
    return 0;
}

