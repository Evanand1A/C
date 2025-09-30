#include <stdio.h>
// 14. Insert a new number at a last position within an array
int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    int value = 60;
    printf("Original array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    arr[size] = value;
    size++;
    printf("Array after inserting %d at the end: ", value);
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
