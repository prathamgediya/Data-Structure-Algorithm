// implement a program to reverse the given string without using library function

#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    int i;

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string in-place
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
