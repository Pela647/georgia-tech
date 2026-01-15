#include <stdio.h>
#include <stdlib.h>

int *allocate_scalr_list(int size, int multiplier){
    int *result = malloc(size * sizeof(int));
    if (result == NULL) { return NULL; }

    for(int i = 0; i < size; i++) {
        result[i] = i * multiplier;
    }

    return result;
}

int main(){
    int size = 5;
    int *result = allocate_scalr_list(size, 2);
    
    for(int i = 0; i < size; i++) {
        printf("we have %d at location %d \n", result[i], i);
    }

    // free memory after calling the function
    free(result);

    return 0;
}