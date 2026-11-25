/*
Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to find and return the top student's structure
struct Student getTopStudent(struct Student students[], int count) {
    struct Student top = students[0]; // Assume the first student is the top scorer

    for (int i = 1; i < count; i++) {
        if (students[i].marks > top.marks) {
            top = students[i]; // Copy the entire structure of the higher scorer
        }
    }

    return top; // Return the structure by value
}

// Reusing our print function from earlier
void printStudent(struct Student s) {
    printf("--- Top Student ---\n");
    printf("ID    : %d\n", s.id);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student classList[3] = {
        {101, "Aarav Sharma", 89.5},
        {102, "Priya Verma", 94.0},
        {103, "Rohan Das", 82.0}
    };

    // Receive the returned structure into a variable
    struct Student topper = getTopStudent(classList, 3);

    // Print its members
    printStudent(topper);

    return 0;
}