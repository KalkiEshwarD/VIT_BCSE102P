// Implement a digital calculator for two numbers using functions and switch case.
#include <stdio.h>

int calc(int a, int b, char x)
{
    /*
        INPUT:  --{a [integer], b [integer], x [char]}--
        OUTPUT: --MULTIPLE--
        
        DEPENDENCIES: Nil
        DESCRIPTION: This is a function that is 
    */
    switch (x) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '^':
            if (b == 0) {
                return 1;
            } else {
                return a * a * (calc(a, b - 1, x)); 
            }
    }
}

int main()
{
    int a, b;
    char x[2];

    printf("Enter values of a and b (a, b): ");
    scanf("%d %d", &a, &b);

    printf("Enter operation (+,-,*,/,^):");
    scanf("%s", x);

    int result = calc(a, b, x[0]);
    printf("%d", result);

    return -0;
}
