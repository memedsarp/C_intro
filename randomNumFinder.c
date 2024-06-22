#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumFind(int answer, int minNum, int maxNum, int *minNumP, int *maxNumP);

int main(int argc, char const *argv[])
{
  srand(time(0));
  int answer = rand() % 100;
  int minNum = 0;
  int maxNum = 100;
  int counter = 0;
  do
  {
    printf("\n%d - %d", minNum, maxNum);
    counter++;
  } while (answer != randomNumFind(answer, minNum, maxNum, &minNum, &maxNum));
  printf("\nThe answer: %d", answer);
  printf("\nCounter: %d", counter);
  return 0;
}

int randomNumFind(int answer, int minNum, int maxNum, int *pMinNum, int *pMaxNum)
{
  int guess = (maxNum + minNum) / 2;

  if (guess < answer)
  {
    *pMinNum = guess;
  } else if (guess > answer)
  {
    *pMaxNum = guess;
  }
  printf("\nguess - %d", guess);
  return guess;
}
