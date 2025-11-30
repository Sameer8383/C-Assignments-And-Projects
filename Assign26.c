#include <stdio.h>
#include <math.h>

/* Assignment:-26 Recursion */

//***************************************************************************************
// Q1 - Print first N Even natural numbers in Reverse  Order using Recursion
//***************************************************************************************

void NaturalEven(int *n)
{
    if (*n == 0) // base case
        return;

    int temp = *n; // store value

    printf("%d ", 2 * temp); // print even number

    (*n)--;         // decrease value
    NaturalEven(n); // recursive call
}

void f1()
{
    printf("Q1. (Using Normal Function Call)\n");
    printf("Write a function to print first N Even natural numbers in Reverse Order using Recursion.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;
    printf("N Even number series[in reverse order]: ");
    NaturalEven(ptr);

    printf("\n\n\n\n\n");
}
void f1_()
{
    printf("Q1.1 (Using Function Pointer)\n");
    printf("----> Write a function to print first N Even natural numbers in Reverse order using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int n = 10;
    int *ptr = &n;
    printf("N Even number series[in reverse order]: ");

    void (*fptr)(int *) = &NaturalEven;
    (*fptr)(ptr);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q2 - Print Square of first N natural number using Recursion.(Normal & Function Pointer)
//***************************************************************************************

void Square(int *n)
{
    if (*n == 0)
        return; // base case
    int temp = *n;
    (*n)--;
    Square(n);                  // recursive call
    printf("%d ", temp * temp); // print after recursion for forward order
}

void f2()
{
    printf("Q2. (Using Normal Function Call)\n");
    printf("Write a function to print square of first N natural numbers using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("Square series using recursion: ");
    Square(ptr);

    printf("\n\n\n\n\n");
}

void f2_()
{
    printf("Q2.1 (Using Function Pointer)\n");
    printf("----> Write a function to print squares of first N natural numbers using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 10;
    int *ptr = &a;
    printf("Square series using recursion: ");

    void (*fptr)(int *) = &Square;
    (*fptr)(ptr);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q3 - Print Binary of a given decimal number using Recursion (Normal & Function Pointer)
//***************************************************************************************

void binary(int *n)
{
    if (*n == 0) // base case
        return;

    int temp = (*n) % 2; // store remainder
    (*n) = (*n) / 2;     // divide number by 2

    binary(n);          // recursive call
    printf("%d", temp); // print after recursion
}

void f3()
{
    printf("Q3. (Using Normal Function Call)\n");
    printf("Write a function to print Binary of a given decimal number using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 13; // example decimal number
    int *ptr = &a;
    printf("Binary of %d is ", *(ptr));

    if (*ptr == 0) // special case
        printf("0");
    else
        binary(ptr);

    printf("\n\n\n\n\n");
}

void f3_()
{
    printf("Q3.1 (Using Function Pointer)\n");
    printf("----> Write a function to print Binary of a given decimal number using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 20; // example decimal number
    int *ptr = &a;
    printf("Binary of %d is ", *(ptr));

    void (*fptr)(int *) = &binary;

    if (*ptr == 0) // special case
        printf("0");
    else
        (*fptr)(ptr);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q4 - Print Octal of a given decimal number using Recursion (Normal & Function Pointer)
//***************************************************************************************

void octal(int *n)
{
    if (*n == 0) // base case
        return;

    int temp = (*n) % 8; // store remainder
    (*n) = (*n) / 8;     // divide number by 2

    octal(n);           // recursive call
    printf("%d", temp); // print after recursion
}

void f4()
{
    printf("Q4. (Using Normal Function Call)\n");
    printf("Write a function to print Octal of a given decimal number using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 13; // example decimal number
    int *ptr = &a;
    printf("Octal of %d is ", *(ptr));

    if (*ptr == 0) // special case
        printf("0");
    else
        octal(ptr);

    for (int Q = 1; Q <= 4; Q++)
        printf("\n");
}

void f4_()
{
    printf("Q4.1 (Using Function Pointer)\n");
    printf("----> Write a function to print Octal of a given decimal number using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 20; // example decimal number
    int *ptr = &a;
    printf("Octal of %d is ", *(ptr));

    void (*fptr)(int *) = &octal;

    if (*ptr == 0) // special case
        printf("0");
    else
        (*fptr)(ptr);

    for (int Q = 1; Q <= 4; Q++)
        printf("\n");
}
//***************************************************************************************
// Q5 - Print Reverse of a given number using Recursion (Normal & Function Pointer)
//***************************************************************************************

void reverse(int *n)
{
    if (*n == 0) // base case
        return;

    int digit = *n % 10; // extract last digit
    printf("%d", digit); // print immediately (reverses number)

    *n = *n / 10; // update value
    reverse(n);   // recursive call
}

void f5()
{
    printf("Q5. (Using Normal Function Call with Pointer)\n");
    printf("Write a function to print Reverse of a given number using Recursion.\n\n");
    printf("Solution:-\n\n");

    int a = 1369; // example decimal number
    int *ptr = &a;

    printf("Reverse of %d is ", *(ptr));
    if (*ptr == 0) // special case
        printf("0");
    else
        reverse(ptr);

    for(int Q = 1; Q <= 4; Q++)
        printf("\n");
}

void f5_()
{
    printf("Q5.1 (Using Function Pointer)\n");
    printf("----> Write a function to print Reverse of a given number using Recursion & FUNCTION POINTER.\n\n");
    printf("Solution:-\n\n");

    int a = 7085; // example decimal number
    int *ptr = &a;
    printf("Reverse of %d is ", *(ptr));

    void (*fptr)(int *) = &reverse;
    if (*ptr == 0) // special case
        printf("0");
    else
        (*fptr)(ptr);

    for(int Q = 1; Q <= 4; Q++)
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