/*
Search in a sorted array using binary search.
*/

#include <stdio.h>

int main() {
    int n, key, i;
    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    int low = 0, high = n - 1, mid, found = -1;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] == key) {
            found = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if(found != -1) printf("Element found at index %d\n", found);
    else printf("Element not found\n");
    return 0;
}/*
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main() {
    int n, key, i;
    printf("Enter current number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    
    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter element to insert: ");
    scanf("%d", &key);
    
    int pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
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
}