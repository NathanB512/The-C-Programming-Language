#include <stdio.h>

// Create a program that converts Celsius to Farenheight, stopping when Farenheigh is <= 300

#define LOWER 0
#define UPPER 300
#define INCREMENT 20

main(){
    // Declare variables
    int celsius;
    // ONly makinguse of the float data type for fahr, as I know celsius will be a whole number
    float fahr;

    // For loop computation
        // initialise celisius variable to 0
        // the test is whether or not celsius is more than 300
        // increment celisus by 20 after each cycle of the loop
        // print out the result of equation
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + INCREMENT)
    {
        // print celsius as right-aligned in a 3 space wide cell
        // print farenheight as right-aligned in a 6 space wide cell
        printf("%3d, %6.1f\n", celsius, (celsius * 1.8 + 32));
    }
};