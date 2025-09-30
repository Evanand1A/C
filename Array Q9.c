#include <stdio.h>
// 9. Reverse the array of maximum 5 elements
int main() {
    int arr[5], size;
    int i, start, end, temp;
    printf("Enter the size of the array (max 5): ");
    scanf("%d", &size);
    if (size > 5 || size < 1) {
        printf("Invalid size.\n");
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    start = 0;
    end = size - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("\nThe reversed array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
