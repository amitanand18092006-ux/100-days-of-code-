/*
Write a program to take a string input. Change it to sentence case.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1005];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = 0;

    int capitalize = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
        // If sentence-ending punctuation is met, capitalize next letter
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }
    }

    printf("%s\n", str);
    return 0;
}