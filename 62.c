/*
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long arr[n];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);

    long long maxSum = arr[0];
    long long currSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > currSum + arr[i]) {
            currSum = arr[i];
        } else {
            currSum += arr[i];
        }
        if (currSum > maxSum) {
            maxSum = currSum;
        }
    }
    printf("%lld\n", maxSum);
    return 0;
}