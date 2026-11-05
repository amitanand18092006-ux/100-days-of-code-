/*
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum: %d\nAverage: %.2f\n", sum, average);
    }

    return 0;
}