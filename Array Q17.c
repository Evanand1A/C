#include <stdio.h>
// 17. Delete a value from the last position
int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    printf("Original array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    size--;
    printf("Array after deleting from the end: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
