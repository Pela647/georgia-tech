#include <stdio.h>

int main(){

    // data type of the var and the pointer must be the same
    int age = 22;
    int *pAge = &age;

    printf("address of age = %p \n", &age);
    // what is stored in the pointer? It is the address of the variable age
    printf("value of the pointer = %p \n", pAge);

    printf("value of age = %d \n", age);
    // value at the original var the pointer is pointing to (called dereferencing)
    printf("value at stored address = %d \n", *pAge);

    return 0;
}