// implement a program to merge ( concatenation ) two string without using library function

#include <stdio.h>

int main(){
    char str1[25], str2[25];
    int i=0, j=0;
    
    printf("\n Enter First String:");
    fgets(str1, sizeof(str1), stdin);

    printf("\n Enter Second String:");
    fgets(str2, sizeof(str2), stdin);

    // Find the end of str1
    while (str1[i] != '\0' && str1[i] != '\n') {
        i++;
    }
    
    // Remove newline character if present
    if (str1[i] == '\n') {
        str1[i] = '\0';
    }

    // Concatenation
    while (str2[j] != '\0' && str2[j] != '\n') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; // Null terminate

    printf("\n Concatenated string is %s", str1);
    return 0;
}
