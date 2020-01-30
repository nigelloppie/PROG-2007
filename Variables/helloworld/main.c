#include <stdio.h>
#include <stdint.h>
#include <float.h>
int main() {
    /* Declaring variables */
    //Ints
    short int sint= 0;
    unsigned short int usint = 0;
    int num = 0;
    unsigned int unum= 0;
    long long lnum = 0;

    //Chars
    char ch = 0;
    unsigned char uch = 0;

    ch = 127;
    uch= 234;
    unum = 2147483648;

//    num = INT32_MAX;
//    num = INT32_MIN;
//    printf("range %i to %i, ch = %u\n",INT8_MIN, INT8_MAX, uch);
//    printf("range %i to %i, ch = %c\n",INT8_MIN, INT8_MAX, ch);
//    printf("range %lli to %lli, num = %lli\n",INT64_MIN, INT64_MAX, lnum);
//    printf("Range %u to %u, num = %u\n", 0, INT32_MAX, unum);

    //Floats

    float f = -32.425f;
    double d = 0.0;
    f = -2e38f;
    d= 2e57;
    printf("range %f to %f, f = %g\n",FLT_MIN, FLT_MAX ,f);
    printf("range %f to %f, f = %g\n", DBL_MIN, DBL_MAX, d);
	return 0;

}
