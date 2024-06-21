#include <stdio.h>

void birthday(char name[], int age) {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are already %d years old!", age);
}

int birthdayCalc(int age) {
    return 2024 - age;
}




int main(int argc, char const *argv[])
{
    char name[25];
    int age;

    printf("Please type your name: ");
    scanf("%s", &name);
    printf("Please enter your age: ");
    scanf("%d", &age);

    birthday(name, age);
    birthday(name, age);

    printf("\nYou were born in %d", birthdayCalc(age));

    return 0;
}


