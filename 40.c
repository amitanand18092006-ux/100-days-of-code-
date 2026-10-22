/*
Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
            
    printf("Diagonal traversal:\n");
    for (int line = 0; line < r + c - 1; line++) {
        int start_col = (line < r) ? 0 : line - r + 1;
        int count = (line < r) ? (line + 1) : (r + c - line - 1);
        for (int k = 0; k < count; k++) {
            int row = line - start_col - k;
            int col = start_col + k;
            printf("%d ", mat[row][col]);
        }
    }
    printf("\n");
    return 0;
}/*
Multiply two matrices.
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if(c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must match Rows of B.\n");
        return 0;
    }
    
    int a[r1][c1], b[r2][c2], res[r1][c2];
    
    printf("Enter matrix A:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
            
    printf("Enter matrix B:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
            
    // Initialize result matrix to 0
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            res[i][j] = 0;
            
    // Multiplication logic
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Resultant Matrix after Multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}