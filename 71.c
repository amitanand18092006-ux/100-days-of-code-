/*
Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
*/

#include <stdio.h>

int main() {
    // Open the file "info.txt" in write mode ("w")
    FILE *file = fopen("info.txt", "w");

    // Check if the file was created/opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[100];
    int age;

    // Taking user inputs
    printf("Enter your name: ");
    scanf("%99s", name); // Reads a single-word name (or usefgets for spaces)

    printf("Enter your age: ");
    scanf("%d", &age);

    // Writing name and age to the file using fprintf()
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    // Close the file to save changes and free resources
    fclose(file);

    // Display confirmation message
    printf("Data was successfully saved to info.txt\n");

    return 0;
}