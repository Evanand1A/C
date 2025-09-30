#include <stdio.h>
#define ROWS 3
#define COLS 3
// 5. Add two 2D arrays of same size and store the result in the 3rd one.
int main() {
    int A[ROWS][COLS], B[ROWS][COLS], C[ROWS][COLS];
    int i, j;
    printf("Enter elements for the first 3x3 matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements for the second 3x3 matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nThe sum of the two matrices is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
