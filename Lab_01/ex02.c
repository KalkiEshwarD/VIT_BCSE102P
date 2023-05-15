// Develop a C program for sum of two numbers
// Allocate two variables only

#include <stdio.h>

int sum(int num1, int num2)
{
    /*
        INPUT: --{num1, num2}-- [integer, integer] 
        OUTPUT: --num1 + num2-- [integer] The sum of two integers

        DEPENDENCIES: Nil
        DESCRIPTION: This is a function that takes in two integers as input and then outputs their sum.
    */


    return num1 + num2;
}

int main()
{
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int result = sum(n1, n2);
    printf("The sum of %d and %d is: %d", n1, n2, result);


    return 0;    
}
