/*
Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    char source[100], dest[100];
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    FILE *dst = fopen(dest, "w");
    if (dst == NULL) {
        printf("Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    printf("File copied successfully.\n");
    fclose(src);
    fclose(dst);
    return 0;
}