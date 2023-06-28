#include <stdio.h>

#define L0WER 0
#define UPPER 300
#define DECREMENT 20

// Conversion from Fahrenheight to Celsius beginning from 300f-0f
main(){
    // Declare varibales
    int fahr;
    float celsius;

    for (fahr = UPPER; fahr >= L0WER; fahr = fahr - DECREMENT)
    {
        printf("%3d, %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}