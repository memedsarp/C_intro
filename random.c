#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool randomNum(int pickNum, int hiddenNum, bool correct, int maxNum);

int main(int argc, char const *argv[])
{
    srand(time(0));

    for(int i=0; i<5; i++) {
        int num1 = (rand() % 6) + 1;
        printf("\n%d", num1);
    }

    bool correct = false;
    int maxNum;

    printf("\nPick a number for max: ");
    scanf("%d", &maxNum);

    int hiddenNum = rand() % (maxNum + 1);
    
    do
    {   
        int pickNum;
        printf("\nPick a number between 0 and %d: ", maxNum);
        scanf("%d", &pickNum);
        correct = randomNum(pickNum, hiddenNum, correct, maxNum);
    }
    while(!correct);

    return 0;
}

bool randomNum(int pickNum, int hiddenNum, bool correct, int maxNum)
{
    if (pickNum == hiddenNum)
    {
        correct = true;
        printf("\nYou guessed correct! Congrats!!");
    } else if (pickNum < hiddenNum)
    {
        printf("\nYou guessed lower.");
    } else {
        printf("\nYou guessed higher.");
    }
    return correct;
}

// write a program to find the num most efficiently by applying bst algo
