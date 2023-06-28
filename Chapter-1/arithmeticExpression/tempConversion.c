#include <stdio.h>

// Symbolic Constants are symbols that represent another thing (as per the convention they tend to be written in upper-case)
// They work to increase program comprehension
// define LOWER as being a 0 (symbolic constant -> replacement text)
#define LOWER 0
#define UPPER 300
#define STEP 20

// Program that converts Farenheight-Celcius
int main(void) {
    printf("Farenheight Conversion to Celsius Table\n\n\n");

    // Declarations of the variables
    float fahr, celsius;
    int lower, upper, step;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    };
    return 1;
}