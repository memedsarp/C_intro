#include <stdio.h>

int main(int argc, char const *argv[])
{
  char sym = 'A';
  char *pSym = &sym;

  printf("\nThe address: %p", pSym);
  printf("\nThe value: %c", *pSym); // dereferencing!!
  
  return 0;
}
