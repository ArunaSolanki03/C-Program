#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
int result;
char s1[20],s2[20];
printf("Enter two strings: ");
scanf("%s %s",&s1,&s2);
result=strcmp(s1,s2);
if(result>0)
    printf("The first string is greater than the second one\n");
else if(result<0)
    printf("The second string is greater than the first one\n");
else
    printf("Both the strings are equal\n");
    return 0;
}
