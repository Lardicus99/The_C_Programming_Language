/* Combination of Fahrenheit to Celsius and Celsius to Fahrenheit programs */

#include <stdio.h>
#include <string.h>

#define LOWER 0     /* lower table limit */
#define UPPER 300   /* upper table limit */
#define STEP  20    /* step size */

int convertTemp(char* unitToConvertTo){
    if(strcmp(unitToConvertTo, "celsius") == 0){
        /* Print F / C table */
        int fahr;
        
        printf("==========\n");
        printf("Fahr Cels\n");
        printf("==========\n");
        for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
            printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        }
    }
    else if(strcmp(unitToConvertTo, "fahrenheit") == 0){
        /* Print C / F table */
        int cels;

        printf("==========\n");
        printf("Cels Fahr\n");
        printf("==========\n");
        for (cels = LOWER; cels <= UPPER; cels = cels + STEP) {
            printf("%3d %6.1f\n", cels, ((9.0/5.0)*cels)+32);
        }
    }
    else{
        printf("Unsupported temperature unit!\n");
        return -1;
    }
}

int main(int argc, char* argv[]) {
    /* argv value determines which table is used */
    
    if(strcmp(argv[1], "1") == 0){
        /* Print F / C table */
        convertTemp("celsius");
    }
    else if(strcmp(argv[1], "2") == 0){
        /* Print C / F table */
        convertTemp("fahrenheit");
    }
    
}
