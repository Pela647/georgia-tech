#include <stdio.h>

int main()
{

    FILE *pF = fopen("test_file.txt", "r");

    // buffer to store the lines of text
    char buffer[255];

    if(pF == NULL) 
    {
        printf("File doesn't exist");
    }
    else 
    {
    // print each line at a time
        while(fgets(buffer, 255, pF) != NULL) {
            printf("%s", buffer);
        }
        
        fclose(pF);
    }

    return 0;
}