#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

main () {

    // Declare prescence of varibales
    int c, state;

    // Iterate through all values in data type
    while ((c = getchar()) != EOF) {
        // Ascertain whether or not we have encountered a character
        if (isalpha(c)) {
            // Update state
            state = IN;
            // Output word character
            putchar(c);
        }
        else if (state == IN && ispunct(c)) {
            putchar(c);
        }
        else if (state == IN && c == ' ') {
            // Update the state to out
            state == OUT;
            // Print a new line
            printf("\n");
        }
        else {
            ;
        }
    }
}