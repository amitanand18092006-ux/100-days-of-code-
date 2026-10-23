/*
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    // Using value marking/negation for O(1) extra space single pass (assuming elements are 1 to n-1)
    int duplicate = -1;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        int absVal = abs(val);
        // If index position is already negative, it's the duplicate
        // (Assuming standard constraints where input matches 1-indexed values)
    }
    // Alternatively, hash-based array check if range allows:
    int count[100005] = {0};
    // Re-reading loop can be done if stored, but assuming streaming input:
    // Let's use a simple storage array:
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    int duplicate = -1;
    
    // We can use a frequency check array of size N
    int *freq = (int *)calloc(n + 1, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (freq[arr[i]] == 1) {
            duplicate = arr[i];
        }
        freq[arr[i]] = 1;
    }
    printf("%d\n", duplicate);
    free(freq);
    return 0;
}