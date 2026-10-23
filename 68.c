/*
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        actualSum += val;
    }
    printf("%d\n", expectedSum - actualSum);
    return 0;
}