#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    // for loop
    for (int i=0; i<10; i++) {
        printf("%d\n", i);
    }

    // do while loop

    char name[25];
    
    do {
        printf("Please type your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    } while (strlen(name) == 0);
    

    printf("\n%s, hello.", name);


    int num = 0;
    int sum = 0;

    do {
        printf("\n\nEnter a number: ");
        scanf("%d", &num);

        sum += num;
    } while (num>0);

    printf("The sum is: %d", sum);

    return 0;
}
