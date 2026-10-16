#include <stdio.h>
#include "utilities.h"

int main () { 
    //Declare variables
    printf("Enter your age: ");
    int ages=readINT();

    printf("Your age is: %d\n", ages);

    return 0;
}