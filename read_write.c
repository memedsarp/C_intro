#include <stdio.h>

int main(int argc, char const *argv[])
{
  FILE *pF = fopen("test.txt", "w");

  fprintf(pF, "Sarp Solakoğlu");

  fopen("test.txt", "a");

  fprintf(pF, " - Uni Graz");
  fprintf(pF, "\nSarp Solakoğlu - Uni Belgrade");
  fprintf(pF, "\nSarp Solakoğlu - Indiana University");
  fprintf(pF, "\nSarp Solakoğlu - Yildiz Technical University");
  fprintf(pF, "\nSarp Solakoğlu - Uskudar University");
  fprintf(pF, "\nSarp Solakoğlu - Uni Sarajevo");
  fprintf(pF, "\nSarp Solakoğlu - Petrozavodsk Uni");
  fprintf(pF, "\nSarp Solakoğlu - Minsk Uni");

  fclose(pF);

  FILE *readF = fopen("test.txt", "r");
  char buffer[255];
  

  if(readF == NULL)
  {
    printf("Unable to read the file");
  } else
  {
    while (fgets(buffer, 255, readF) != NULL)
    {
      printf("%s", buffer);
    }
  }

  fclose(readF);
  return 0;
}
