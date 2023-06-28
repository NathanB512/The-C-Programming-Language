#include <stdio.h>

main () {
    // Declare variable to hold chracters
    int ch;

    while((ch = getchar()) != EOF) {
        putchar(ch);
    }
}