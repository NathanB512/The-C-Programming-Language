// Exercise 1-14 Write a program to print a histogram of the frequncies of different characters in its output

#include <stdio.h>
#define ASCIIcodes 95
#define ASCIIify 32

main () {
    // Declare variables
    int c;

    // Decalre character array to keep note of character frequencies
    int ch[ASCIIcodes];
    // Initialise all of the values to 0
    for (int x = 0; x < ASCIIcodes; x++) {
        ch[x] = 0;
    }

        while ((c = getchar()) != EOF) {
            ch[c]++;
        }

    // Print histogram
    for (int z = 0; z < ASCIIcodes; z++) {
        // Print out the character in question
        
        printf('%c', ch[]);
    }
}