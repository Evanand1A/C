#include <stdio.h>
// 13. Insert a new number at a particular position within an array
int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;
    int value = 99;
    printf("Original array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    size++;
    printf("Array after inserting %d at position %d: ", value, pos);
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
