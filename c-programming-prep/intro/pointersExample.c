#include <stdio.h>


void printAge(int *pAge) {
    printf("I am %d years old", *pAge);
}


int main(){

    // data type of the var and the pointer must be the same
    int age = 22;
    int *pAge = NULL; // good practice to assign a NULL if declaring a pointer
    pAge = &age;

    printf("address of age = %p \n", &age);
    // what is stored in the pointer? It is the address of the variable age
    printf("value of the pointer = %p \n", pAge);

    printf("value of age = %d \n", age);
    // value of the original var the pointer is pointing to (called dereferencing)
    printf("value at stored address = %d \n", *pAge);

    printAge(pAge);

    return 0;
}