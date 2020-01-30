#include <stdio.h>

int main() {

    // (3.31 x 10-8 x 2.01 x 10-7) / (7.16 x10- + 2.01 x 10-8) = 9.26602694 x 10-10

    float answer = (3.31e-8f * 2.01e-7f) / (7.16e-6 + 2.01e-8f);

    printf("answer = %.8e\n",answer);

    return 0;
}