/*
Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;
    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);
    int mat[n][n], diag[n];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if(i == j) diag[i] = mat[i][j];
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
    }
    
    if(distinct) printf("Diagonal elements are distinct.\n");
    else printf("Diagonal elements are NOT distinct.\n");
    return 0;
}/*
Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);
    int mat[n][n];
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if(i == j) sum += mat[i][j];
        }
    }
    
    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}