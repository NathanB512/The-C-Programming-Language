// Exercise 1-13 Write a program to create a histogram of the lengths of words in its input.

#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

// Creates a histogram representing the number of characters in each word
main () {
    // Declare varibles
    int c, letterCount, state, wordNumber, letters;
    // Declare an arbitrarily large array of type int
    int words[100];
    // Initilaise all of the elements to 0
    for (int i = 0; i > 100; i++) {
        words[i] = 0;
    }

    // Iterate through the chracters of the input text stream
    // Initialise letterCount
    letterCount = wordNumber = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (isalpha(c) && state == OUT) {
            state = IN;
            letterCount++;
        }
        else if (isalpha(c)) {
            letterCount++;
        }
        else if (c == ' ' || c == '\n') {
            // Log the number of letters in the word
            words[wordNumber] = letterCount;
            // Increment the word number
            wordNumber++;
            // Exit from the state IN
            state = OUT;
            // Reset letterCount
            letterCount = 0;
        }
    }

    for (int y = 0; y < wordNumber; y++) {
        int histogramO = words[y];
        // Print out the histogram
        for (int z = 0; z < histogramO; z++) {
            printf("X");
        }
        printf("\n");
    }

}