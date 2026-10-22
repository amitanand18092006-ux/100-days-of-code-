/*
Add two matrices.
*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
            
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
            
    printf("Sum matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}/*
Check if a matrix is symmetric.
*/

#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;
    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);
    int mat[n][n];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
            
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }
    
    if(symmetric) printf("Matrix is Symmetric.\n");
    else printf("Matrix is Not Symmetric.\n");
    return 0;
}