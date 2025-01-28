// implement a program to copy one string to another without using library function

#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i = 0;

    // Copy each character from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Add null terminator to the destination string
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    printf("Enter the source string: ");
    scanf("%s", source);

    copyString(source, destination);

    printf("The copied string is: %s\n", destination);

    return 0;
}
