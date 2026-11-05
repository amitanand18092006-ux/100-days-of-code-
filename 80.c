/*
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main() {
    // Writing records
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "Alice 101 88.5\n");
    fprintf(file, "Bob 102 92.0\n");
    fprintf(file, "Charlie 103 79.5\n");
    fclose(file);

    // Reading records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char name[50];
    int roll;
    float marks;

    printf("Student Records:\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}