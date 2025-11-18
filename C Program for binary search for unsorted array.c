#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[5]={25,12,22,64,11};
    int n=5;
    int key,low=0,high=n-1,mid;
    int found=0;
    int i,j,temp;
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted Array :\n");
    for(i=0;i<5;i++)
        printf("%d""  \n",arr[i]);
        printf("Enter element to search:\n");
        scanf("%d",&key);
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==key){
                printf("Element %d found at position %d.\n",key,mid+1);
                found=1;
                break;
            }
            else if(key<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
    if(!found)
        printf("Element not found");
    return 0;
}
