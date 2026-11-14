/*
Define a structure Student with name, roll_no, and marks, then read and print one student's data.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Roll No: ");
    scanf("%d", &s.roll_no);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);

    return 0;
}