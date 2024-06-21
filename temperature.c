#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char unit;
    double temp;

    printf("Please enter the unit. Either F or C: ");
    scanf("%c", &unit);
    unit = toupper(unit);

    printf("Now enter the degree: ");
    scanf("%lf", &temp);

    switch (unit) {
    case 'C':
        temp = (temp * 9 / 5) + 32;
        printf("\nIt is %.1lf F outside.", temp);
        break;
    case 'F':
        temp = (temp - 32) * 5 / 9;
        printf("\nIt is %.1lf C outside.", temp);
        break;
    default:
        printf("\nThe unit you entered is not valid!");
        break;
    }


    return 0;
}
