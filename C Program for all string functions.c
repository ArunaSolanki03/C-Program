#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
char s1[100],s2[100];
printf("Enter two strings: \n");
scanf("%s %s",&s1,&s2);
printf("Lenght of string 1 (s1): %lu\n",strlen(s1));
strcat(s1,s2);
printf("After concatenation: %s\n",s1);
strcpy(s2,s1);
printf("Copied strings: %s\n",s2);
printf("Comparison result: %d\n",strcmp(s1,s2));
    return 0;
}
