/*
Count frequency of a given character in a string.
*/

#include <stdio.h>

int main() {
    char str[1000], target;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter character to find: ");
    scanf("%c", &target);
    
    int count = 0;
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == target) {
            count++;
        }
    }
    
    printf("Frequency of '%c' is: %d\n", target, count);
    return 0;
}/*
Toggle case of each character in a string.
*/

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    
    printf("Toggled string: %s", str);
    return 0;
}