#include <stdio.h>
// 16. Delete a value from a particular position within an array
int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;
    printf("Original array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deleting from position %d: ", pos);
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
