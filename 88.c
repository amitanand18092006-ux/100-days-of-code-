/*
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    COLOR_COUNT
};

int main() {
    const char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (int i = RED; i < COLOR_COUNT; i++) {
        printf("%s = %d\n", colorNames[i], i);
    }
    return 0;
}