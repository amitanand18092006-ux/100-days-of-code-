/*
Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k;
    scanf("%d", &k);

    int dq[n];
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        if (front <= rear && dq[front] == i - k) {
            front++;
        }
        while (front <= rear && arr[dq[rear]] < arr[i]) {
            rear--;
        }
        dq[++rear] = i;

        if (i >= k - 1) {
            printf("%d ", arr[dq[front]]);
        }
    }
    printf("\n");
    return 0;
}