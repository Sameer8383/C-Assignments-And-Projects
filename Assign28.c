#include <stdio.h>
#include <math.h>

/* Assignment:- 28:
More On Recursion */

//***************************************************************************************
// Q1 - Calculate Factorial of a given number using Recursion
//***************************************************************************************
int factorial(int *n)
{
    if (*n == 0 || *n == 1) // base case
        return 1;
    int temp = *n - 1;

    return (*n) * factorial(&temp);
}

void f1()
{
    printf("Q1. (Using Normal Function Call)\n");
    printf("Write a function to calculate factorial of a given number using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;
    int result = factorial(ptr);

    printf("Factorial of %d = %d", n, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f1_()
{
    printf("Q1.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate factorial of a given number using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 6;
    int *ptr = &n;

    int (*fptr)(int *) = &factorial;
    int result = (*fptr)(ptr);

    printf("Factorial of %d = %d", n, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q2 - Calculate HCF of two numbers using Recursion
//***************************************************************************************
int hcf(int a, int b)
{
    if (a == 0) // base case
        return b;
    else if (b == 0)
        return a;
    else if (a > b)
        return hcf(a - b, b);
    else
        return hcf(a, b - a);
}

void f2()
{
    printf("Q2. (Using Normal Function Call)\n");
    printf("Write a function to calculate HCF of two numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 60, b = 48;
    int result = hcf(a, b);

    printf("HCF of %d and %d = %d", a, b, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f2_()
{
    printf("Q2.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate HCF of two numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 42, b = 56;

    int (*fptr)(int, int) = &hcf;
    int result = (*fptr)(a, b);

    printf("HCF of %d and %d = %d", a, b, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q3 - Print first N terms of Fibonacci series using Recursion
//***************************************************************************************

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void f3()
{
    printf("Q3. (Using Normal Function Call)\n");
    printf("Write a function to print first N terms of Fibonacci series using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 10; // number of terms
    int *ptr = &n;

    printf("First %d terms of Fibonacci series: ", *ptr);

    for (int i = 0; i < *ptr; i++)
    {
        printf("%d ", fibonacci(i));
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f3_()
{
    printf("Q3.1 (Using Function Pointer)\n");
    printf("----> Write a function to print first N terms of Fibonacci series using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 7; // number of terms
    int *ptr = &n;

    int (*fptr)(int) = &fibonacci;

    printf("First %d terms of Fibonacci series: ", *ptr);

    for (int i = 0; i < *ptr; i++)
    {
        printf("%d ", (*fptr)(i));
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q4 - Count the digits of a given number using Recursion
//***************************************************************************************
int countDigits(int *n)
{
    if (*n == 0)
        return 0;

    int temp = *n / 10;
    return 1 + countDigits(&temp);
}

void f4()
{
    printf("Q4. (Using Normal Function Call)\n");
    printf("Write a function to count digits of a given number using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 98765;
    int *ptr = &n;
    int result = countDigits(ptr);

    printf("Number of digits in %d = %d", n, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f4_()
{
    printf("Q4.1 (Using Function Pointer)\n");
    printf("----> Write a function to count digits of a given number using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 123456789;
    int *ptr = &n;

    int (*fptr)(int *) = &countDigits;
    int result = (*fptr)(ptr);

    printf("Number of digits in %d = %d", n, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q5 - Calculate power of a given number using Recursion
//***************************************************************************************
int power(int *base, int *exp)
{
    if (*exp == 0) // base case
        return 1;

    int temp = *exp - 1;
    return (*base) * power(base, &temp);
}

void f5()
{
    printf("Q5. (Using Normal Function Call with Pointer)\n");
    printf("Write a function to calculate power of a given number using Recursion.\n\n");
    printf("Solution:-\n\n");

    int base = 2, exp = 5;
    int *b = &base, *e = &exp;

    int result = power(b, e);

    printf("%d^%d = %d", base, exp, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f5_()
{
    printf("Q5.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate power of a given number using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int base = 3, exp = 4;
    int *b = &base, *e = &exp;

    int (*fptr)(int *, int *) = &power;
    int result = (*fptr)(b, e);

    printf("%d^%d = %d", base, exp, result);

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// MAIN FUNCTION
//***************************************************************************************
int main()
{
    f1();
    f1_();
    f2();
    f2_();
    f3();
    f3_();
    f4();
    f4_();
    f5();
    f5_();
    return 0;
}