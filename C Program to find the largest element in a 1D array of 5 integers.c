#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int arr[5] , i , largest;

    printf("Enter 5 integers:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
