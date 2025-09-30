#include <stdio.h>
// 8. Copy one array of 5 elements to another array of 10 elements skipping one element.
int main() {
    int source[5];
    int destination[10] = {0};
    int i;
    printf("Enter 5 integer values for the source array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &source[i]);
    }
    for (i = 0; i < 5; i++) {
        destination[i * 2] = source[i];
    }
    printf("\nSource array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", source[i]);
    }
    printf("\nDestination array after copying:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");
    return 0;
}
