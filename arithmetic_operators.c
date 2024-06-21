#include <stdio.h>


int main(int argc, char const *argv[])
{
    /* Not unlike any program you might know */

    int x = 1564;
    int y = 154;
    double z = .145;

    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x + z = %d\n", x + z);
    printf("x / y = %d\n", x / y);
    printf("x / y = %f\n", (float) x / y);
    printf("x / z = %f\n", x / z);
    printf("x mod y = %d\n", x % y);

    return 0;
}
