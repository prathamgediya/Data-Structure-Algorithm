// write a program to compare of two given string without using library function in c language.

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare characters of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }

    // Check if strings are of different lengths
    if (str1[i] != '\0' || str2[i] != '\0') {
        return (str1[i] - str2[i]);
    }

    return 0; // Strings are equal
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is smaller than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}
