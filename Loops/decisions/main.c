#include <stdio.h>
int main () {

    // or = ||
    // and = &&
    int a = 4;
    int b = 3;
    int c = 3;

    // dont over complicate the logic
    if (a < b && !(b == c)) {
        printf("a < b AND b < c\n");
    }
    if (a < b) {
        printf("a < b\n");
    } else if (b < c) {
        printf(b < c);
    }else {
        printf("a >= b && b >= c\n");
    }

    if (a < b)
        printf("a < b\n");
    else
        if (b < c)
            printf(b < c);
        else
            printf("a >= b && b >= c\n");



    return 0;
}