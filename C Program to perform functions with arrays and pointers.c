#include <stdio.h>
#include <stdlib.h>

void input_array(int *arr, int n)
{
    for(int i = 0; i < n; i++)
        {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display_array(int *arr, int n)
{
    for(int i = 0; i < n; i++)
        {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumArray(int *arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        {
        sum += arr[i];
    }
    return sum;
}

int countPos(int *arr, int n)
 {
    int count = 0;
    for(int i = 0; i < n; i++)
        {
        if(arr[i] > 0)
         {
            count++;
        }
    }
    return count;
}

int countNeg(int *arr, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
        {
        if(arr[i] < 0)
        {
            count++;
        }
    }
    return count;
}

int main()
 {
    int arr[100], n, sum, pos_c, neg_c;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    input_array(arr, n);
    printf("The elements in the array are:\n");
    display_array(arr, n);

    sum = sumArray(arr, n);
    printf("\nSum of all elements: %d\n", sum);

    pos_c = countPos(arr, n);
    printf("Number of positive elements: %d\n", pos_c);

    neg_c = countNeg(arr, n);
    printf("Number of negative elements: %d\n", neg_c);

    return 0;
}
