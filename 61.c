/*
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k;
    scanf("%d", &k);

    int q[n];
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) q[++rear] = i;
    }

    for (int i = k - 1; i < n; i++) {
        while (front <= rear && q[front] < i - k + 1) {
            front++;
        }
        if (front <= rear && q[front] <= i) {
            printf("%d ", arr[q[front]]);
        } else {
            printf("0 ");
        }
    }
    printf("\n");
    return 0;
}