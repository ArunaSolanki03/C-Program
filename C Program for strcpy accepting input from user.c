#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char src[100];
char dest[100];
printf("Enter the source\n");
scanf("%s",&src);
strcpy(dest,src);
printf("Copied string is:  %s\n",dest);
return 0;

}
