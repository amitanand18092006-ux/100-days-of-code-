/*
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src = fopen("input.txt", "r");
    if (src == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    FILE *dst = fopen("output.txt", "w");
    if (dst == NULL) {
        printf("Error opening output.txt\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(toupper(ch), dst);
    }

    printf("Converted content written to output.txt\n");
    fclose(src);
    fclose(dst);
    return 0;
}