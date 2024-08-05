#include <stdlib.h>
#include <stdio.h>

main(){
    int c;

    c = getchar();
    putchar(c);
    printf("\n");

    if((c != EOF) == 0){
        printf("char c is equal to EOF\n");
    }
    else if((c != EOF) == 1){
        printf("char c is not equal to EOF\n");
    }
    else{
        printf("char c is neither equal nor unequal to EOF\n");
    }

    while((c != EOF)) {
        putchar(c);
        c = getchar();
    }

    printf("\nEOF: %d\n", EOF);
}