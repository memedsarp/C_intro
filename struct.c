#include <stdio.h>
#include <string.h>

struct Player 
{
    char name[12];
    int score;
};


int main(int argc, char const *argv[])
{
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Sarp");
    player1.score = 98;

    strcpy(player2.name, "Hande");
    player2.score = 95;

    printf("\n%s", player1.name);
    printf("\n%d", player1.score);

    printf("\n%s", player2.name);
    printf("\n%d", player2.score);
    return 0;
}
