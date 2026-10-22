/*
Find the second largest element in an array.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    int first = INT_MIN, second = INT_MIN;
    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    if(second == INT_MIN) printf("No distinct second largest element found.\n");
    else printf("Second largest element: %d\n", second);
    return 0;
}/*
Rotate an array to the right by k positions.
*/

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter k positions to rotate right: ");
    scanf("%d", &k);
    k = k % n;
    
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    
    printf("Rotated array: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}