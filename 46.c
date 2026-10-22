/*
Remove all vowels from a string.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], res[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            res[j++] = str[i];
        }
    }
    res[j] = '\0';
    
    printf("String without vowels: %s", res);
    return 0;
}/*
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int freq[26] = {0};
    char repeating = '\0';
    
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                repeating = str[i];
                break;
            }
        }
    }
    
    if(repeating != '\0') {
        printf("First repeating lowercase alphabet: %c\n", repeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}