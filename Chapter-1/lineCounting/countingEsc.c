#include <stdio.h>

 main() {
    // Declare variables to hold no. of blanks, tabs, new lines and chracter
    int blanks, tabs, newlines, ch;
    // Initialise variable counters to 1
    blanks = tabs = newlines = 0;

    // Prompt the user for input

    // Compute no. of blanks, tabs and new lines
    while ((ch = getchar()) != EOF) {
        // Condition for blanks
        if (ch == ' ') {
            ++blanks;
        }

        // Conditional for tabs
        if (ch == '\t') {
            ++tabs;
        }
        // Conditional for new line chracter
        if (ch == '\n') {
            ++newlines;
        }
    }
    printf("Your text stream has %d blanks, %d tabs and %d new lines.\n", blanks, tabs, newlines);
}