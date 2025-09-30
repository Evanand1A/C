#include <stdio.h>
// 3. Accept 5 values and sort the array in either ascending or descending order.
int main() {
    int arr[5];
    int i, j, temp, choice;
    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (choice == 1) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else if (choice == 2) {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
