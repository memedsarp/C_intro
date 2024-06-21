#include <stdio.h>
#include <string.h>

// strlwr toLower
// strupr toUpper
// strcat concats
// strcpy copies
// strncpy copies n chars
// strrev reverse a string
//  strlen
//  strcmp compares chars
//  strcmpi compares ignoring cases


int main(int argc, char const *argv[])
{
    char string1[] = "Sarp";
    char string2[25];


    strcpy(string2, string1);
    printf("\nHere is the second string: %s", string2);

    printf("\nHere is concatenated strings: %s", strcat(strcat(string1, " "), string2));
    

    return 0;
}
