// Implement a program to find length of a string without using library function.

#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;

    // Increment length until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = stringLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}
