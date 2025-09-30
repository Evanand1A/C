#include <stdio.h>
// 11. Shift all nos. by given n positions within an array of 10 elements either on left or right side. Pad the remaining position with 0
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n, choice;
    printf("Original array:\n");
    printArray(arr, 10);
    printf("\nEnter number of positions to shift: ");
    scanf("%d", &n);
    printf("1. Right Shift\n2. Left Shift\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        for (int i = 9; i >= 0; i--) {
            if (i - n >= 0) {
                arr[i] = arr[i - n];
            } else {
                arr[i] = 0;
            }
        }
    } else if (choice == 2) {
        for (int i = 0; i < 10; i++) {
            if (i + n < 10) {
                arr[i] = arr[i + n];
            } else {
                arr[i] = 0;
            }
        }
    } else {
        printf("Invalid choice.\n");
        return 1;
    }
    printf("\nArray after shifting:\n");
    printArray(arr, 10);
    return 0;
}
