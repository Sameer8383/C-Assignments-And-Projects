#include <stdio.h>

/* Assignment:-22 Functions */

//***************************************************************************************
// Q6 - Factorial of a Number (Normal & Function Pointer)
//***************************************************************************************

int factorial(int *n)
{

    int fact = 1;

    for (int i = 1; i <= *n; i++)
        fact *= i;

    return fact;
}
/** (Using Normal Function Call) **/
void f1()
{
    printf("Q1. (Using Normal Function Call)\n");
    printf("Write a function to calculate factorial of a number. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int num = 5;
    int *ptr = &num;

    if (ptr != NULL)
    {
        int result = factorial(ptr); //*** pass pointer
        printf("Factorial of %d is %d\n", num, result);
        printf("\n\n\n");
    }

    return;
}
/** (Using Function Pointer) **/
void f1_()
{
    printf("Q1.1 (Using Function Pointer)\n");
    printf("----> Write a function to print N terms of Fibonacci series using "
           "FUNCTION POINTER. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int num = 6;
    int *ptr = &num;

    //*** Declare a function pointer
    int (*fptr)(int *) = &factorial;

    //*** Call Circle() using function pointer
    int res = (*fptr)(ptr);

    printf("Factorial of %d is %d\n", num, res);
    printf("\n\n\n");
}

//***************************************************************************************
// Q2 - Calculate numer of combinations (Normal & Function Pointer)
//***************************************************************************************

int Factorial(int *n)
{
    int i, Fact = 1;
    for (i = 1; i <= *n; i++)
        Fact *= i;
    return Fact;
}

int Combination(int *n, int *r)
{
    int temp = *n - *r;
    int nCr = Factorial(n) / (Factorial(r) * Factorial(&temp));
    return nCr;
}

int f2()
{
    printf("Q2. Write a function to calculate the number of combinations one can"
           "make from {n} items and {r} selected at a time. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int n = 5, r = 3;
    int *ptr1 = &n;
    int *ptr2 = &r;

    int result = Combination(ptr1, ptr2);
    printf("Total number of combinations (nCr) = %d\n", result);

    printf("\n\n\n");
    return 0;
}

int f2_()
{
    printf("Q2.1 ----> Write a function to calculate number of combinations using"
           "FUNCTION POINTER. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int n = 6, r = 4;
    int *ptr1 = &n;
    int *ptr2 = &r;

    int (*fptr)(int *, int *) = &Combination;
    int result = fptr(ptr1, ptr2);

    printf("Total number of combinations (nCr) = %d\n", result);

    printf("\n\n\n");
    return 0;
}

//***************************************************************************************
// Q2 - Calculate numer of arrangements (Normal & Function Pointer)
//***************************************************************************************

int facto(int *n)
{

    int i, fact = 1;

    for (i = 1; i <= *n; i++)
        fact *= i;

    return fact;
}

int permutation(int *n, int *r)
{
    int temp = *n - *r;
    int nPr = facto(n) / facto(&temp);
    return nPr;
}

/** (Using Normal Function Call) **/
void f3()
{
    printf("Q3.1 ----> Write a function to calculate number of permutations using"
           " Normal Function Call. (TSRS)\n\n"); // fixed description
    printf("Solution:-\n\n");

    //*** Define variables ***/
    int n = 5, r = 3;

    //*** Create pointers to n and r ***/
    int *ptr1 = &n;
    int *ptr2 = &r;

    //*** Call Circle() using function pointer and store the result
    int result = permutation(ptr1, ptr2);

    printf("Total number of permutations (nPr) = %d\n", result);

    printf("\n\n\n");
}
void f3_()
{
    printf("Q3.1 ----> Write a function to calculate number of permutations using"
           "FUNCTION POINTER. (TSRS)\n\n");

    printf("Solution:-\n\n");

    int n = 6, r = 4;

    int *ptr1 = &n;
    int *ptr2 = &r;

    //*** Declare a function pointer
    int (*fptr)(int *, int *) = &permutation;

    //*** Call Circle() using function pointer
    int result = fptr(ptr1, ptr2);

    printf("Total number of permutations (nPr) = %d\n", result);
    printf("\n\n\n");
}

//***************************************************************************************
// Q4 - Check whether a digit belongs to a given number (Normal & Function
// Pointer)
//***************************************************************************************

//*** Function to check if digit belongs to number
//*****************************************
//           BELONGS FUNCTION
//*****************************************
int belongs(int *n, int *digit) {
    int temp = *n;  // Correct: Copy number value

    while (temp != 0) {
        if (temp % 10 == *digit)
            return 1;

        temp /= 10;
    }
    return 0;
}

//*****************************************
//      USING NORMAL FUNCTION CALL
//*****************************************
void f4() {
    printf("Q4. (Using Normal Function Call)\n");
    printf("Write a function to check if a digit belongs to a number. (TSRN)\n\n");

    int num = 4325;
    int digit = 3;

    int *p = &num;
    int *q = &digit;

    int store = belongs(p, q);

    if (store == 1)
        printf("%d belongs to %d\n", *q, num);
    else
        printf("%d does not belong to %d\n", *q, num);

    printf("\n\n\n");
}

//*****************************************
//        USING FUNCTION POINTER
//*****************************************
void f4_() {
    printf("Q4.1 (Using Function Pointer)\n");
    printf("Write a function to check if a digit belongs to a number using FUNCTION POINTER. (TSRN)\n\n");

    int num = 4325;
    int digit = 3;

    int *p = &num;
    int *q = &digit;

    int (*fptr)(int *, int *) = &belongs;

    int store = fptr(p, q);

    if (store == 1)
        printf("%d belongs to %d\n", *q, num);
    else
        printf("%d does not belong to %d\n", *q, num);

    printf("\n\n\n");
}

//*****************************************
//         PRIME FACTOR FUNCTION
//*****************************************
void PrimeFactor(int *n)
{
    int temp = *n;  // copy original
    int i;

    printf("Prime factors of %d are: ", *n);

    for (i = 2; i <= temp; i++)
    {
        while (temp % i == 0)
        {
            printf("%d,", i);
            temp /= i;
        }
    }

    printf("1.");

    int j = 1;
    while (j <= 4)
    {
        printf("\n");
        j++;
    }
}

//*****************************************
//    CALL PRIME FACTOR (NORMAL CALL)
//*****************************************
void f5()
{
    printf("Q5. (Using Normal Function Call)\n");
    printf("Write a function to print all prime factors. Example: 36 → 2,2,3,3,1. (TSRN)\n\n");

    int num = 36;
    PrimeFactor(&num);
}

//*****************************************
//    CALL PRIME FACTOR (FUNCTION POINTER)
//*****************************************
void f5_()
{
    printf("Q5.1 (Using Function Pointer)\n");
    printf("Prime factor using FUNCTION POINTER. (TSRN)\n\n");

    int num = 36;

    void (*fptr)(int *) = &PrimeFactor;
    fptr(&num);
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