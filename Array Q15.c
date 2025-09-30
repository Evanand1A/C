#include <stdio.h>
// 15. Delete a value from the first position of the array
int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    printf("Original array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deleting from the beginning: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
