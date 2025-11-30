#include <stdio.h>
#include <math.h>

/* Assignment:-25 Recursion */

//***************************************************************************************
// Q1 - Print first N natural number using Recursion.(Normal & Function Pointer)
//***************************************************************************************

void natural(int *n)
{
    if (*n == 0)
        return; // base case
    int temp = *n;
    (*n)--;
    natural(n);          // recursive call
    printf("%d ", temp); // print after recursion for forward order
}

void f1()
{
    printf("Q1. (Using Normal Function Call)\n");
    printf("Write a function to print first N natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("N natural number series: ");

    natural(ptr);

    printf("\n\n\n\n\n");
}

void f1_()
{
    printf("Q1.1 (Using Function Pointer)\n");
    printf("----> Write a function to print first N natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("N natural number series: ");

    void (*fptr)(int *) = &natural;
    (*fptr)(ptr);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q2 - Print first N natural number using Recursion in reverse order.(Normal & Function Pointer)
//***************************************************************************************

void NaturalReverse(int *n)
{
    if (*n == 0)
        return; // base case

    printf("%d ", *n); // print before recursion for reverse order
    (*n)--;
    NaturalReverse(n);
}

void f2()
{
    printf("Q2. (Using Normal Function Call)\n");
    printf("Write a function to print first N natural numbers in reverse order using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("N natural number series [in reverse form]: ");

    NaturalReverse(ptr);
    printf("\n\n\n\n\n");
}

void f2_()
{
    printf("Q2.1 (Using Function Pointer)\n");
    printf("----> Write a function to print first N natural numbers in reverse order using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("N natural number series [in reverse form]: ");

    void (*fptr)(int *) = &NaturalReverse;
    (*fptr)(ptr);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q3 - Print first N Odd natural numbers using Recursion (Normal & Function Pointer)
//***************************************************************************************

void NaturalOdd(int *n)
{
    if (*n == 0)
        return;

    int temp = *n;
    (*n)--;                      // decrease value
    NaturalOdd(n);               // recursive call
    printf("%d ", 2 * temp - 1); // print odd number
}

void f3()
{
    printf("Q3. (Using Normal Function Call)\n");
    printf("Write a function to print first N Odd natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("N Odd natural numbers: ");

    NaturalOdd(ptr);
    printf("\n\n\n\n\n");
}

void f3_()
{
    printf("Q3.1 (Using Function Pointer)\n");
    printf("----> Write a function to print first N Odd natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("N Odd natural numbers: ");

    void (*fptr)(int *) = &NaturalOdd;
    (*fptr)(ptr);
    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q4 - Print first N Odd natural numbers in Reverse using Recursion
//***************************************************************************************

void OddReverse(int *n)
{
    if (*n == 0)
        return;
    printf("%d ", *n * 2 - 1);
    (*n)--;
    OddReverse(n);
}

void f4()
{
    printf("Q4. (Using Normal Function Call)\n");
    printf("Write a function to print first N Odd natural numbers in Reverse using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;
    printf("N Odd natural numbers[in reverse order]: ");

    OddReverse(ptr);

    printf("\n\n\n\n\n");
}

void f4_()
{
    printf("Q4.1 (Using Function Pointer)\n");
    printf("----> Write a function to print first N Odd natural numbers in Reverse using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;
    printf("N Odd natural numbers[in reverse order]: ");

    void (*fptr)(int *) = &OddReverse;
    (*fptr)(ptr);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q5 - Print first N Even natural numbers using Recursion
//***************************************************************************************

void NaturalEven(int *n)
{
    if (*n == 0)
        return;

    int temp = *n;
    (*n)--;                  // decrease value
    NaturalEven(n);          // recursive call
    printf("%d ", 2 * temp); // print odd number
}

void f5()
{
    printf("Q5. (Using Normal Function Call)\n");
    printf("Write a function to print first N Even natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;
    printf("N Even natural numbers: ");

    NaturalEven(ptr);
    printf("\n\n\n\n\n");
}

void f5_()
{
    printf("Q5.1 (Using Function Pointer)\n");
    printf("----> Write a function to print first N Even natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;
    printf("N Even natural numbers: ");

    void (*fptr)(int *) = &NaturalEven;
    (*fptr)(ptr);

    printf("\n\n\n\n\n");
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