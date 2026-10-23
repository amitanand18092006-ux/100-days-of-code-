/*
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    if (scanf("%s", s) != 1) return 0;

    int lastIndex[256];
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLength = 0, left = 0;
    for (int right = 0; s[right] != '\0'; right++) {
        char c = s[right];
        if (lastIndex[(unsigned char)c] >= left) {
            left = lastIndex[(unsigned char)c] + 1;
        }
        lastIndex[(unsigned char)c] = right;
        int len = right - left + 1;
        if (len > maxLength) maxLength = len;
    }
    printf("%d\n", maxLength);
    return 0;
}