/*
Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum ErrorCodes {
    SUCCESS = 0,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

int main() {
    enum ErrorCodes code1 = SUCCESS;
    enum ErrorCodes code2 = NOT_FOUND;
    int numericCode = SERVER_ERROR;

    printf("SUCCESS value: %d\n", code1);
    printf("NOT_FOUND value: %d\n", code2);
    printf("SERVER_ERROR stored in int: %d\n", numericCode);
    printf("Size of enum variable: %zu bytes (same as int)\n", sizeof(code1));
    
    return 0;
}