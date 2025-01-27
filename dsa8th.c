// implement a program to merge ( concatenation ) two string without using library function


#include <stdio.h>

void concatenateStrings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy the first string into result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append the second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Add null terminator to the result string
    result[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenateStrings(str1, str2, result);

    printf("The concatenated string is: %s\n", result);

    return 0;
}
