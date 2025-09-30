#include <stdio.h>
// 10. Find out frequency of each number in the array (having 10 elements)
int main() {
    int arr[10];
    int freq[10];
    int i, j, count;
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            count = 1;
            for (j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }
    printf("\nFrequency of each element:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("Element %d occurs %d time(s)\n", arr[i], freq[i]);
        }
    }
    return 0;
}
