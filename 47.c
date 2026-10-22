/*
Check if two strings are anagrams of each other.
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    int count[256] = {0};
    int i = 0;
    
    while(str1[i] != '\0' && str2[i] != '\0') {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
        i++;
    }
    
    if(str1[i] != '\0' || str2[i] != '\0') {
        printf("Strings are NOT anagrams (different lengths).\n");
        return 0;
    }
    
    int isAnagram = 1;
    for(int j = 0; j < 256; j++) {
        if(count[j] != 0) {
            isAnagram = 0;
            break;
        }
    }
    
    if(isAnagram) printf("Strings are anagrams.\n");
    else printf("Strings are NOT anagrams.\n");
    return 0;
}/*
Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;
    
    int i = 0;
    while(1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if(currLen == 0) currStart = i;
            currLen++;
        } else {
            if(currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
            if(str[i] == '\0' || str[i] == '\n') break;
        }
        i++;
    }
    
    printf("Longest word: ");
    for(int j = 0; j < maxLen; j++) {
        putchar(str[maxStart + j]);
    }
    printf("\n");
    return 0;
}