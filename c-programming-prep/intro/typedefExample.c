#include <stdio.h>

// typdef helps create a nickname for datatype

typedef char user[25];

// example with struct, typdef for a struct would look like the following:

typedef struct
{
   char name[25];
   int score;
} Person;

int main(){

    user user1 = "Pela";

    Person person1 = {"Pela", 24};
    Person person2 = {"Rob", 24};


    printf("%s \n", user1);

    printf("my name is %s and i got %d. \n", person1.name, person1.score);

    return 0;
}


