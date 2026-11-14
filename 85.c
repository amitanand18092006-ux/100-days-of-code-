/*
Assign explicit values starting from 10 and print them.
*/

#include <stdio.h>

enum Status {
    PENDING = 10,
    PROCESSING, // Automatically becomes 11
    COMPLETED   // Automatically becomes 12
};

int main() {
    printf("PENDING: %d\n", PENDING);
    printf("PROCESSING: %d\n", PROCESSING);
    printf("COMPLETED: %d\n", COMPLETED);
    return 0;
}