/*
Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    
    printf("Row sums: ");
    for(i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    return 0;
}/*
Find the transpose of a matrix.
*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c], trans[c][r];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            trans[j][i] = mat[i][j];
        }
    }
    
    printf("Transpose of the matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}