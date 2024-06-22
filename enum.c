#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(int argc, char const *argv[])
{
    enum Day today = Thu;

    if(today != Sun && today != Sat)
    {
        printf("Workday");
    } else
    {
        printf("Weekend");
    }
    

    return 0;
}
