#include <stdio.h>

int main(int argc, char const *argv[])
{

    int age;
    char grade;

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("What is your grade?\n");
    scanf(" %c", &grade);

    //if-else if-else

    if(age<=18) {
        printf("You are under 18, %d to be sure.\n", age);
    } else if (age>=40) {
        printf("You are a lot older. %d to be precise.\n", age);
    } else {
        printf("You are only %d years old.\n", age);
    }


    // switch

    switch (grade) {
    case 'A':
        printf("Perfect score.\n");
        break;
    case 'B':
        printf("It's ok I guess.\n");
        break;
    default:
        printf("You just got %c! Horrible", grade);
        break;
    }

    return 0;
}
