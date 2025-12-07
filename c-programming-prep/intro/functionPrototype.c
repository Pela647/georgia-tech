#include <stdio.h>

// function prototype tells what type and number of args a function takes

void hello(char[], int);

// declare function
void hello(char name[], int age){
    printf("my name is %s and i am %d years old",name,age);
}

// call function
int main() {
    hello("rob", 22);
    return 0;
}

