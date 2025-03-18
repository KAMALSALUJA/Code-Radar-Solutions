#include <stdio.h>

void concatenate(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy str1 into result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy str2 into result after str1
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the result
    result[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    // Read first string
    fgets(str1, sizeof(str1), stdin);
    // Read second string
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    int len1 = 0;
    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') {
            str1[len1] = '\0';
            break;
        }
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') {
            str2[len2] = '\0';
            break;
        }
        len2++;
    }

    // Concatenate the strings
    concatenate(str1, str2, result);

    // Output the concatenated string
    printf("%s\n", result);

    return 0;
}
