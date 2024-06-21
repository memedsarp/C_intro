#include <stdio.h>

// function prototypes to avoid unpredictable behaviours in functions

int findMax(int num1, int num2);

// main

int main(int argc, char const *argv[])
{
    int max = findMax(3, 5);

    printf("\nThe max num is: %d", max);
    return 0;
}



int findMax(int num1, int num2) {
    // ternary operators are just same as in javascript
    return (num1 > num2) ? num1 : num2;
}