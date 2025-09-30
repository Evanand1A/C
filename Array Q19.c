#include <stdio.h>
// 19. Search a value within an array
int main() {
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int size = 7;
    int value, found = 0, i;
    printf("Enter the value to search for: ");
    scanf("%d", &value);
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("Value %d found at index %d.\n", value, i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Value %d was not found in the array.\n", value);
    }
    return 0;
}
