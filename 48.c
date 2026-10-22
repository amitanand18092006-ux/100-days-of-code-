/*
Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if(strlen(str1) != strlen(str2)) {
        printf("Strings are NOT rotations of each other.\n");
        return 0;
    }
    
    strcpy(temp, str1);
    strcat(temp, str1);
    
    if(strstr(temp, str2) != NULL) {
        printf("String 2 is a rotation of String 1.\n");
    } else {
        printf("String 2 is NOT a rotation of String 1.\n");
    }
    return 0;
}/*
Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>

void reversePart(char str[], int start, int end) {
    while(start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int start = 0;
    for(int i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reversePart(str, start, i - 1);
            start = i + 1;
        }
        if(str[i] == '\0' || str[i] == '\n') break;
    }
    
    printf("Modified sentence: %s", str);
    return 0;
}