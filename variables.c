#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int main(int argc, char const *argv[]) {

    // there is also "short" and "long long int", the former having a smaller max and the latter greater

    int age = 9;
    float gpa = 3.75;
    double gpa_pre = 3.75486534578787543;
    const float PI = 3.14159;

    /* char between -128 and 127 may represent a number or a char
        an unsigned char can between 0 and 255 */

    char num = 120;
    unsigned char num2 = 250;

    char grade = 'A';
    char name[] = "Sarp";

    bool isStudent = true;

    /*
    %c %s %f %lf %d
    
    %.1 decimal precision
    %1 minimum field width
    %- left align
    */

    printf("You are %d years old.\n", age);
    printf("Hello %s!\n", name);
    printf("Your average grade is %c.\n", grade);
    printf("Your GPA is %0.15f.\n", gpa);
    printf("Your GPA is %0.15f.\n", gpa_pre);
    printf("You're a student: %d", isStudent);

    return 0;
}
