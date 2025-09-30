#include <stdio.h>
#define N 3
// 6. Multiply two 2D arrays and store the result in the 3rd 2D-array.
int main() {
    int A[N][N], B[N][N], C[N][N];
    int i, j, k;
    printf("Enter elements for the first %dx%d matrix:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements for the second %dx%d matrix:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = 0;
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nThe product of the two matrices is:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
