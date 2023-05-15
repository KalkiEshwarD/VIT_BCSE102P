// Implement a c program to calculate electricity bill with unit price slabs.

#include <stdio.h>

int e_bill(int units) {
    /*
        INPUT: --units-- [integer]
        OUTPUT: --bill-- [float]
        
        DEPENDENCIES: Nil
        DESCRIPTION: This is a function that takes in the number of units as input and then gives the final price as output.
    */    
    int bill = 0;
    
    if (units > 250) {
        bill += (units - 250) * (1.50);
        units = 250;
    }

    if (units > 150) {
        bill += (units - 150) * (1.20);
        units = 150;
    }

    if (units > 50) {
        bill += (units - 50) * (0.75);
        units = 50;
    }

    if (units > 0) {
        bill += (units - 0) * (0.50);
        units = 0;
    } else {
        printf("Error!");
        return -1;
    }

    return bill * 1.20;
}

int main()
{
    int units;
    scanf("%d", &units);

    int result = e_bill(units);
    printf("%d", result);

    return 0;
}
