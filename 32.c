/*
Merge two arrays.
*/

#include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    
    int merged[n1 + n2];
    for(i = 0; i < n1; i++) merged[i] = arr1[i];
    for(i = 0; i < n2; i++) merged[n1 + i] = arr2[i];
    
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}/*
Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    long long num;
    printf("Enter an integer number: ");
    scanf("%lld", &num);
    
    if(num < 0) num = -num;
    
    int freq[10] = {0};
    if(num == 0) freq[0] = 1;
    
    while(num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    int maxFreq = -1, mostFrequentDigit = 0;
    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }
    
    printf("Digit occurring the most times: %d (Frequency: %d)\n", mostFrequentDigit, maxFreq);
    return 0;
}