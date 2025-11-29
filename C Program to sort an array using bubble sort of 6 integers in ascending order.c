#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[6]={25,38,82,64,11,74};
    int i,j,temp;
    for(i=0;i<6-1;i++)
    {
        for(j=0;j<6-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted Array In Ascending order:\n");
    for(i=0;i<6;i++)
        printf("%d""  ",arr[i]);
    return 0;
}
