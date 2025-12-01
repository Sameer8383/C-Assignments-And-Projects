#include <stdio.h>

/* Assignment:-22 Functions */
/* ------------------------------------------------------------
   ONE FACTORIAL FUNCTION FOR EVERYTHING (Normal + FP + nCr+nPr)
   ------------------------------------------------------------ */
int factorial(int *n)
{
    int fact = 1;
    for (int i = 1; i <= *n; i++)
        fact *= i;

    return fact; // return integer
}

/* ------------------------------------------------------------
   Q1 – Factorial (Normal Call)
   ------------------------------------------------------------ */
void f1()
{
    printf("\nQ1. Using Normal Function Call (Factorial)\n\n");

    printf("Solution:-\n\n");
    int num = 5;
    int *ptr = &num;

    int result = factorial(ptr);

    printf("Factorial of %d is %d\n\n", num, result);
}

/* ------------------------------------------------------------
   Q1.1 – Factorial (Function Pointer)
   ------------------------------------------------------------ */
void f1_()
{
    printf("\nQ1.1 Using Function Pointer to calculate (Factorial) of a number.\n\n");
    printf("Solution:-\n\n");

    int num = 6;
    int *ptr = &num;

    int (*fptr)(int *) = factorial;

    int result = fptr(ptr);

    printf("Factorial of %d is %d\n\n", num, result);
}

/* ------------------------------------------------------------
   Q2 – Combination (nCr)
   ------------------------------------------------------------ */
int Combination(int *n, int *r)
{
    int temp = *n - *r;

    return factorial(n) /
           (factorial(r) * factorial(&temp));
}

int f2()
{
    printf("\nQ2. Using normal to Callcalculate (Combination nCr)\n\n");
    printf("Solution:-\n\n");

    int n = 5, r = 3;

    int *p1 = &n;
    int *p2 = &r;

    int result = Combination(p1, p2);

    printf("nCr = %d\n\n", result);

    return 0;
}

/* ------------------------------------------------------------
   Q2.1 – Function Pointer (Combination)
   ------------------------------------------------------------ */
int f2_()
{
    printf("\nQ2.1 Function Pointer (Combination nCr)\n\n");
    printf("Solution:-\n\n");

    int n = 6, r = 4;

    int *p1 = &n;
    int *p2 = &r;

    int (*fptr)(int *, int *) = Combination;

    int result = fptr(p1, p2);

    printf("nCr = %d\n\n", result);

    return 0;
}

/* ------------------------------------------------------------
   Q3 – Permutation (nPr)
   ------------------------------------------------------------ */
int permutation(int *n, int *r)
{
    int temp = *n - *r;
    return factorial(n) / factorial(&temp);
}

void f3()
{
    printf("\nQ3. Normal Call (Permutation nPr)\n\n");
    printf("Solution:-\n\n");

    int n = 5, r = 3;

    int *p1 = &n;
    int *p2 = &r;

    int result = permutation(p1, p2);

    printf("nPr = %d\n\n", result);
}

void f3_()
{
    printf("\nQ3.1 Function Pointer (Permutation nPr)\n\n");
    printf("Solution:-\n\n");

    int n = 6, r = 4;

    int *p1 = &n;
    int *p2 = &r;

    int (*fptr)(int *, int *) = permutation;

    int result = fptr(p1, p2);

    printf("nPr = %d\n\n", result);
}

/* ------------------------------------------------------------
   Q4 – Check if digit belongs to number
   ------------------------------------------------------------ */
int belongs(int *n, int *digit)
{
    int temp = *n;

    while (temp != 0)
    {
        if (temp % 10 == *digit)
            return 1;

        temp /= 10;
    }
    return 0;
}

void f4()
{
    printf("\nQ4. Normal Call (Digit Belongs)\n\n");
    printf("Solution:-\n\n");

    int num = 4325;
    int digit = 3;

    int *p = &num;
    int *q = &digit;

    int result = belongs(p, q);

    if (result)
        printf("%d belongs to %d\n\n", digit, num);
    else
        printf("%d does NOT belong to %d\n\n", digit, num);
}

void f4_()
{
    printf("\nQ4.1 Function Pointer (Digit Belongs)\n\n");
    printf("Solution:-\n\n");

    int num = 4325;
    int digit = 3;

    int (*fptr)(int *, int *) = belongs;

    int result = fptr(&num, &digit);

    if (result)
        printf("%d belongs to %d\n\n", digit, num);
    else
        printf("%d does NOT belong to %d\n\n", digit, num);
}

/* ------------------------------------------------------------
   Q5 – Print Prime Factors
   ------------------------------------------------------------ */
void PrimeFactor(int *n)
{
    int temp = *n;

    printf("Prime factors of %d: ", temp);

    for (int i = 2; i <= temp; i++)
    {
        while (temp % i == 0)
        {
            printf("%d,", i);
            temp /= i;
        }
    }
    printf("1.\n\n");
}

void f5()
{
    printf("\nQ5. Normal Call (Prime Factors)\n\n");
    printf("Solution:-\n\n");

    int num = 36;

    PrimeFactor(&num);
}

void f5_()
{
    printf("\nQ5.1 Function Pointer (Prime Factors)\n\n");
    printf("Solution:-\n\n");

    int num = 36;

    void (*fptr)(int *) = &PrimeFactor;
    (*fptr)(&num);
}
/* ------------------------------------------------------------
   MAIN
   ------------------------------------------------------------ */
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
