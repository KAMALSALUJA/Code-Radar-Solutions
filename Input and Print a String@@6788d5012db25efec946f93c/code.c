#include <stdio.h>

int main() {
    char word[100];  // Declare a character array to store the input word

    //printf("Enter a word: ");
    scanf("%s", word);  // Read a single word (stops at space)

    printf("You entered: %s\n", word);  // Print the word

    return 0;
}
