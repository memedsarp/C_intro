#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x = 6;  // 00000110
  int y = 12; // 00001100
  int z;

  z = x & y;
  printf("\nAND = %d", z);

  z = x | y;
  printf("\nOR = %d", z);

  z = x ^ y;
  printf("\nXOR = %d", z);

  z = x << 1; // multiplies by 2 ** n
  printf("\nLeft Shift = %d", z);

    z = x >> 1; // divides by 2 ** n
  printf("\nRight Shift = %d", z);

  return 0;
}
