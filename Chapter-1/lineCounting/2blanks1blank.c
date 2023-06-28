#include <stdio.h>

main () {
    // Declare varibales
    int c, lChar;

    // Initialise last char to an arbritray number
    lChar = -8;

    // Loop
    while ((c = getchar()) != EOF) {
        // Ensure c and last char do not equate to '\b'
        if (c == ' ' && lChar == ' ') {
            // Update the last char variable
            lChar = c;
        }
        // Print output
        else {
            putchar(c);
            lChar = c;
        }
    }
}