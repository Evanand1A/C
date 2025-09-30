#include <stdio.h>
// 2. Accept 10 values and print 4th, 7th, and 9th value.
int main() {
    int arr[10];
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nThe 4th element is: %d\n", arr[3]);
    printf("The 7th element is: %d\n", arr[6]);
    printf("The 9th element is: %d\n", arr[8]);
    return 0;
}
