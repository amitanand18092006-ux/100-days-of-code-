/*
Count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int count = 0;
    while(str[count] != '\0') {
        if(str[count] == '\n') { // Ignore trailing newline from fgets
            break;
        }
        count++;
    }
    
    printf("Number of characters: %d\n", count);
    return 0;
}/*
Print each character of a string on a new line.
*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Characters on new lines:\n");
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}