/*
Store details of 5 students in an array of structures and print all.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- All Student Records ---\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll No", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}