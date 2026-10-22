/*
Print the initials of a name.
*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Initials: ");
    if(str[0] != ' ' && str[0] != '\n' && str[0] != '\0') {
        printf("%c", str[0]);
    }
    
    for(int i = 1; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i - 1] == ' ' && str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}/*
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter full name (e.g., Sachin Ramesh Tendulkar): ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline if present
    str[strcspn(str, "\n")] = 0;
    
    int lastSpace = -1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            lastSpace = i;
        }
    }
    
    printf("Formatted Name: ");
    if(lastSpace == -1) {
        // Only one word
        printf("%s\n", str);
    } else {
        // Print initials for everything before the last space
        if(str[0] != ' ') {
            printf("%c. ", str[0]);
        }
        for(int i = 1; i < lastSpace; i++) {
            if(str[i - 1] == ' ' && str[i] != ' ') {
                printf("%c. ", str[i]);
            }
        }
        // Print the last word (surname) in full
        printf("%s\n", &str[lastSpace + 1]);
    }
    return 0;
}