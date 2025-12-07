#include <stdio.h>
#include <string.h>

// EXAMPLE - 1 

struct Player
{
    char name[15];
    int score;
};


int main() {
    struct  Player player1;
    struct  Player player2;

    strcpy(player1.name, "Pela");
    player1.score = 22;

    printf("player one = %s and his score is = %d \n", player1.name, player1.score);
    
    return 0;
}

// EXAMPLE - 2 

struct Person
{
   char name[25];
   int score;
};

int main(){


    struct Person person1 = {"Pela", 24};
    struct Person person2 = {"Rob", 24};

    struct Person persons[] = {person1, person2};

    for(int i=0; i < sizeof(persons)/sizeof(persons[0]); i++) {
        printf("name is %s \n", persons[i].name);
    }

    printf("my name is %s and i got %d. \n", person1.name, person1.score);

    return 0;
}