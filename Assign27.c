#include <stdio.h>
#include <math.h>

/* Assignment:- 27: */
/*  More On Recursion */

//***************************************************************************************
// Q1 - Calculate Sum of N natural numbers using Recursion
//***************************************************************************************
int sum(int *n)
{
    if (*n == 1) // base case
        return 1;
    int temp = *n - 1;

    return *n + sum(&temp);
}

void f1()
{
    printf("\nQ1. (Using Normal Function Call)\n");
    printf("Write a function to calculate sum of N natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;
    int result = sum(ptr);

    int i = 1;

    printf("Sum of ");
    while (i <= n)
    {
        printf("%d ", i);
        if (i < n)
        {
            printf("+ ");
        }
        else
        {
            printf("= %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f1_()
{
    printf("Q1.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate sum of N natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;

    int (*fptr)(int *) = &sum;
    int result = (*fptr)(ptr);

    int i = 1;

    printf("Sum of ");
    while (i <= n)
    {
        printf("%d ", i);
        if (i < n)
        {
            printf("+ ");
        }
        else
        {
            printf("= %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q2 - Calculate Sum of N Odd natural numbers using Recursion
//***************************************************************************************
int OddSum(int *n)
{
    if (*n == 1) // base case
        return 1;
    int temp = *n - 1;

    return (*n) * 2 - 1 + OddSum(&temp);
}

void f2()
{
    printf("Q2. (Using Normal Function Call)\n");
    printf("Write a function to calculate sum of Odd N natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;
    int result = OddSum(ptr);

    int i = 1;

    printf("Sum of ");
    while (i <= n)
    {
        printf("%d ", 2 * i - 1);
        if (i < n)
        {
            printf("+ ");
        }
        else
        {
            printf("= %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f2_()
{
    printf("Q2.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate sum of N Odd natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;

    int (*fptr)(int *) = &OddSum;
    int result = (*fptr)(ptr);

    int i = 1;

    printf("Sum of ");
    while (i <= n)
    {
        printf("%d ", 2 * i - 1);
        if (i < n)
        {
            printf("+ ");
        }
        else
        {
            printf("= %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q3 - Calculate Sum of N Even natural numbers using Recursion
//***************************************************************************************
int EvenSum(int *n)
{
    if (*n == 1) // base case
        return 2;
    int temp = *n - 1;

    return (*n) * 2 + EvenSum(&temp);
}

void f3()
{
    printf("Q3. (Using Normal Function Call)\n");
    printf("Write a function to calculate sum of Even N natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;
    int result = EvenSum(ptr);

    int i = 1;

    printf("Sum of ");
    while (i <= n)
    {
        printf("%d ", 2 * i);
        if (i < n)
        {
            printf("+ ");
        }
        else
        {
            printf("= %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f3_()
{
    printf("Q3.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate sum of N Even natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;

    int (*fptr)(int *) = &EvenSum;
    int result = (*fptr)(ptr);

    int i = 1;

    printf("Sum of ");
    while (i <= n)
    {
        printf("%d ", 2 * i);
        if (i < n)
        {
            printf("+ ");
        }
        else
        {
            printf("= %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q4 - Calculate Sum of Squares of N natural numbers using Recursion
//***************************************************************************************
int SquareSum(int *n)
{
    if (*n == 1) // base case
        return 1;
    int temp = *n - 1;

    return (*n) * (*n) + SquareSum(&temp);
}

void f4()
{
    printf("Q4. (Using Normal Function Call)\n");
    printf("Write a function to calculate sum of Squares of N natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;
    int result = SquareSum(ptr);

    int i = 1;

    printf("Sum of Squares = ");
    while (i <= n)
    {
        printf("%d^2", i);
        if (i < n)
        {
            printf(" + ");
        }
        else
        {
            printf(" = %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f4_()
{
    printf("Q4.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate sum of Squares of N natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;

    int (*fptr)(int *) = &SquareSum;
    int result = (*fptr)(ptr);

    int i = 1;

    printf("Sum of Squares = ");
    while (i <= n)
    {
        printf("%d^2", i);
        if (i < n)
        {
            printf(" + ");
        }
        else
        {
            printf(" = %d", result);
        }
        i++;
    }

    for (int q = 1; q <= 4; q++)
        printf("\n");
}

//***************************************************************************************
// Q5 - Calculate sum of digits of a given number using Recursion (Normal & Function Pointer)
//***************************************************************************************

int DigitSum(int *n)
{
    if (*n == 0) // base case
        return 0;

    int digit = *n % 10;
    int temp = *n / 10;

    return digit + DigitSum(&temp);
}

void f5()
{
    printf("Q5. (Using Normal Function Call with Pointer)\n");
    printf("Write a function to calculate sum of digits of a given number using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 1369; // example number
    int *ptr = &a;

    int store = DigitSum(ptr);

    printf("Sum of digits of %d = ", a);
    int temp = a;
    while (temp != 0)
    {
        int digit = temp % 10;
        printf("%d", digit);
        temp = temp / 10; // reduce number after extracting digit

        if (temp != 0)
            printf(" + ");
        else
            printf(" = %d", store);
    }
    for (int q = 1; q <= 4; q++)
        printf("\n");
}

void f5_()
{
    printf("Q5.1 (Using Function Pointer)\n");
    printf("----> Write a function to calculate sum of digits of a given number using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 7085; // example number
    int *ptr = &a;

    int (*fptr)(int *) = &DigitSum;
    int result = (*fptr)(ptr);

    printf("Sum of digits of %d = ", a);
    int temp = a;
    while (temp != 0)
    {
        int digit = temp % 10;
        printf("%d", digit);
        temp = temp / 10; // reduce number after extracting digit

        if (temp != 0)
            printf(" + ");
        else
            printf(" = %d", result);
    }

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