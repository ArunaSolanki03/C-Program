#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("hello.txt","W");//opens file for writing(creates/overwrites)
    if(fp==NULL){
        printf("File cannot be opened!\n");
        return 1;
    }
    fprintf(fp,"Welcome to File Handling in C\n");
    fprintf(fp,"This text is written to the file.\n");
    fclose(fp);
    printf("Data written succesfully.\n");
    return 0;
}
