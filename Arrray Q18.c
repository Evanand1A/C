#include <stdio.h>
// 18. Delete a value from the array
int main() {
    int arr[20] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int value, pos = -1, i;
    printf("Original array: ");
    for(i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        for (i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("Array after deleting %d: ", value);
        for(i=0; i<size; i++) printf("%d ", arr[i]);
        printf("\n");
    } else {
        printf("Value %d not found in the array.\n", value);
    }
    return 0;
}
