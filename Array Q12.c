#include <stdio.h>
// 12. Insert a new number at the beginning of the array
int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    int value = 5;
    printf("Original array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    for (int i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
    size++;
    printf("Array after inserting %d at the beginning: ", value);
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
