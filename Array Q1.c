#include <stdio.h>
// 1. Accept 5 values and print them later on
int main() {
    int arr[5];
    printf("Enter 5 integer values:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nThe values you entered are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
