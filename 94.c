/*
Write a function that accepts a structure as parameter and prints its members.
*/

#include <stdio.h>

// 1. Define the structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// 2. Function accepting the structure by value
void printStudent(struct Student s) {
    printf("ID    : %d\n", s.id);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    // 3. Initialize a structure variable
    struct Student s1 = {101, "Aarav Sharma", 89.5};

    // 4. Pass the structure to the function
    printStudent(s1);

    return 0;
}