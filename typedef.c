#include <stdio.h>

typedef char user[25];

typedef struct 
{
    char name[25];
    char password[12];
    int id;
} User;

int main(int argc, char const *argv[])
{
    user user1 = "Sarp";

    User user2 = {"Sarp", "3099", 1};
    User user3 = {"Hande", "12345", 2};
    User user4 = {"Jane", "0000", 3};

    User array[] = {user2, user3};

    array[2] = user3;

    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
    {
        printf("\nThe user name: %s\nThe user password: %s\nThe user id: %d", 
        array[i].name, array[i].password, array[i].id);
    }

    return 0;
}
