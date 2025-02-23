// implement a program to merge ( concatenation ) two string without using library function


#include <stdio.h>

int main() {
    char str1[50], str2[50];  // Increased size to avoid overflow
    int i = 0, j = 0;

    printf("\n Enter First String: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\n Enter Second String: ");
    fgets(str2, sizeof(str2), stdin);

    // Removing newline character from str1
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Removing newline character from str2
    while (str2[j] != '\0') {
        if (str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
        j++;
    }

    // Concatenation
    int len = i;  // Store the length of str1
    i = 0;
    while (str2[i] != '\0') {
        str1[len] = str2[i];
        len++;
        i++;
    }
    str1[len] = '\0'; // Null terminate

    printf("\n Concatenated String is: %s\n", str1);
    return 0;
}
