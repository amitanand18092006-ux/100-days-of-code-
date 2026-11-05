/*
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status current_status = SUCCESS;

    switch (current_status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Connection lost.\n");
            break;
    }

    return 0;
}