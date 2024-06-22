#include <stdio.h>

int main(int argc, char const *argv[])
{
  char a = 'A';
  char b = 'B';
  char c = 'C';

  // "&" gives the address "*" gives the pointer

  printf("\n%d bytes", sizeof(a));
  printf("\n%p is the address for %c", &a, a);

  return 0;
}
