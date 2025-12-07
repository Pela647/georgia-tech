#include <stdio.h>

int main() {
    // 2D array
    int numbers [2][3] = {{1,2,3}, {4,5,6}};

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int colomns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("colomns = %d \n", colomns);

    printf("rows = %d \n", rows);

    for( int i=0; i<rows; i++) {
        for( int j=0; j<colomns;j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}