#include<stdio.h>

//** Assignment 14 **/
//** Use any loop **

//Q1. Factorial

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
void f1() {
    printf("**************************************************************************\n");
    printf("Q1. Write a function to calculate factorial of a number. (TSRN)\n");
    printf("**************************************************************************\n");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("Factorial of %d is: %d\n", n, fact);

    printf("\n**************************************************************************\n");
    printf("                          End of Program : 1st                            \n");

    printf("**************************************************************************\n");
}
int main() {
    f1();
    return 0;
}