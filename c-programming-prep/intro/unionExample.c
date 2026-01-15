#include <stdio.h>

// uunion can only hold one active value at a time.

typedef union AgeOrName {
    int age;
    char *name;
} age_or_name;


int main(){
 age_or_name lane = {
    .age = 22,
 };
  printf("this is my age %d", lane.age);

 return 0;
}