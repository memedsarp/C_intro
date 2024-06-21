#include <stdio.h>

int main(int argc, char const *argv[]) {

    int age = 9;
    float gpa = 3.75;
    char grade = 'A';
    char name[] = "Sarp";

    printf("You are %d years old.\n", age);
    printf("Hello %s!\n", name);
    printf("Your average grade is %c.\n", grade);
    printf("Your GPA is %f.\n", gpa);

    return 0;
}
