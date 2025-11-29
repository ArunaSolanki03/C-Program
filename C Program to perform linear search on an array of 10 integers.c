#include <stdio.h>
#include <stdlib.h>


int main() {
    int arr[10];
    int key;
    int i;
    int found = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the key to search: ");
    scanf("%d", &key);

    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Element %d found at index %d.\n", key, i);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
