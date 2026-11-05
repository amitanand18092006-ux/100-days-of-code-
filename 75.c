/*
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }

    char text[256];
    printf("Enter text to append: ");
    getchar(); // Clear newline buffer
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    printf("Text appended successfully.\n");

    fclose(file);
    return 0;
}