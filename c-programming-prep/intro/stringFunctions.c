#include <stdio.h>
#include <string.h>
// #include <ctype.h>


int main(){
    char string1[] = "Rob";
    char string2[]= "Fes";
    // strlwr(string1);
    strcpy(string1, string2);
    // strcat();

    printf("my name is %s", string1);
}