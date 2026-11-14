/*
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int input;
    printf("Select Role (1: ADMIN, 2: USER, 3: GUEST): ");
    scanf("%d", &input);

    enum Role currentRole = input;

    switch (currentRole) {
        case ADMIN:
            printf("Welcome Admin! You have full system access.\n");
            break;
        case USER:
            printf("Welcome User! You can view and edit your profile.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Unknown role selected.\n");
    }
    return 0;
}