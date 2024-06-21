#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char name[25];

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("What is your name?\n");
    scanf("%s", &name);
    
    printf("Dear %s,", name);
    printf(" you're %d years old!\n", age);
    
    return 0;
}
