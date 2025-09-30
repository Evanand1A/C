#include <stdio.h>
// 7. Obtain transpose of a 4x4 matrix
int main() {
    int matrix[4][4], transpose[4][4];
    int i, j;
    printf("Enter elements for the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nThe transpose of the matrix is:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
