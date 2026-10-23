/*
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/

#include <stdio.h>

int findFirst(int nums[], int n, int target) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            res = mid;
            high = mid - 1; // Search left
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return res;
}

int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            res = mid;
            low = mid + 1; // Search right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return res;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    int target;
    scanf("%d", &target);

    printf("%d %d\n", findFirst(nums, n, target), findLast(nums, n, target));
    return 0;
}