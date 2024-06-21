#include <stdio.h>

int main(int argc, char const *argv[])
{
    double prices[] = {5.99, 10.26, 15.09, 25.0, 19.99};

    for(int i=0; i<sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("\n%.2lf is the price.", prices[i]);
    }

    int numbers[2][3] = {{1, 2, 3},{4, 5, 6}};

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int cols = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    printf("\n\n");

    //2D arrays

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d\t", numbers[i][j]);
        }
        printf("\n");
    }

    // array of strings;

    char cars[][10] = {"Toyota", "Tesla", "Li"};

    for (int i=0; i<sizeof(cars)/ sizeof(cars[0]); i++)
    {
        printf("\n%s is a car.", cars[i]);
    }
    
    return 0;
}
