/*
Create Employee structure with nested Date structure for joining date and print details.
*/

#include <stdio.h>

// 1. Define the nested Date structure first
struct Date {
    int day;
    int month;
    int year;
};

// 2. Define the Employee structure containing a Date member
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate; // Nested structure
};

// Function to accept Employee by value and print all members
void printEmployee(struct Employee emp) {
    printf("--- Employee Details ---\n");
    printf("ID           : %d\n", emp.id);
    printf("Name         : %s\n", emp.name);
    printf("Salary       : %.2f\n", emp.salary);
    printf("Joining Date : %02d/%02d/%04d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);
}

int main() {
    // 3. Initialize nested structure using brace initialization
    struct Employee e1 = {
        201,
        "Ananya Nair",
        75000.00,
        {15, 8, 2024} // day, month, year for joiningDate
    };

    printEmployee(e1);

    return 0;
}