#include <stdio.h>

int main()
{

    FILE *pF = fopen("test_file.txt", "a");

    fprintf(pF, "\n testing for the first time 4 \n");

    fclose(pF);

    // to remove a file use remove(file_name)
    
    return 0;
}