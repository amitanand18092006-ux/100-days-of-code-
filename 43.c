/*
Reverse a string.
*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    
    int start = 0, end = len - 1;
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    printf("Reversed string: %s\n", str);
    return 0;
}/*
Check if a string is a palindrome.
*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    
    int isPalindrome = 1;
    int start = 0, end = len - 1;
    while(start < end) {
        if(str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    
    if(isPalindrome) printf("The string is a palindrome.\n");
    else printf("The string is NOT a palindrome.\n");
    return 0;
}