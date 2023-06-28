#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

main () {
    // Initialise Varibales
    int c;

    while ((c = getchar()) != EOF) {
        // if
        if (c == TAB) {
            printf("\\t");
        }
        // else if
        else if (c == '\b') {
            printf("\\b");
        }
        // else if
        else if (c == BACKSLASH) {
            printf("\\");
            printf("\\");
        }
        // output character
        else {
            putchar(c);
        }
    }
}