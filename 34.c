/*
Insert an element in an array at a given position.
*/

#include <stdio.h>

int main() {
    int n, pos, key, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter position (0-indexed) and element to insert: ");
    scanf("%d %d", &pos, &key);
    
    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }
    
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++;
    
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}/*
Delete an element from an array.
*/

#include <stdio.h>

int main() {
    int n, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter position (0-indexed) of element to delete: ");
    scanf("%d", &pos);
    
    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }
    
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}