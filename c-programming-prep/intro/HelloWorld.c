#include <stdio.h>

double square(int x) {
    return x * x;
}


int main(){
    double result = square(22);
    printf("%.1f", result);
    return 0;
}