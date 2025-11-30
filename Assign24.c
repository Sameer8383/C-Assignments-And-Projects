#include <stdio.h>
#include <math.h>

/* Assignment:-24 More on Functions */

//***************************************************************************************
// Q1 - Find Prime b/w 2 given numbers (Normal & Function Pointer)
//***************************************************************************************

void Prime(int *n, int *num)
{
    int i, j, flag;

    for (i = *n + 1; i <= *num; i++)
    {
        flag = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1 && i > 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void f1()
{
    printf("Q1. (Using Normal Function Call)\n");
    printf("Write a function to print all Prime numbers between two given numbers. (TSRN)\n\n");
    printf("Solution:-\n\n");

    int a = 5, b = 20;
    int *ptr = &a;
    int *ptr1 = &b;

    printf("print all Prime numbers between %d and %d is: ", *(ptr), *(ptr));

    if (ptr != NULL)
    {
        Prime(ptr, ptr1);
    }
    else
    {
        printf("ptr is a NULL pointer.\n");
    }
    ptr = NULL;
    printf("\n\n\n\n\n");
}

void f1_()
{
    printf("Q1.1 (Using Function Pointer)\n");
    printf("----> Write a function to print all Prime numbers between two given numbers using FUNCTION POINTER. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int a = 3, b = 15;
    int *ptr = &a;
    int *ptr1 = &b;
    printf("print all Prime numbers between %d and %d is: ", *(ptr), *(ptr));

    void (*fptr)(int *, int *) = &Prime;
    (*fptr)(ptr, ptr1);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q2 - Print 1st N term of Fibonacci Series(Normal & Function Pointer)
//***************************************************************************************

void fibonacci(int *n)
{
    int t1 = 0, t2 = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 1; i <= *n; i++)
    {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
}

/** (Using Normal Function Call) **/
void f2()
{
    printf("Q2. (Using Normal Function Call)\n");
    printf("Calculate and print Fibonacci Series up to N terms (TSRS)\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;

    printf("Fibonacci Series up to N terms: ");
    if (ptr != NULL)
    {
        fibonacci(ptr);
    }
    else
    {
        printf("\nptr is a NULL pointer.\n");
    }

    printf("\n\n\n\n\n");
}

/** (Using Function Pointer) **/
void f2_()
{
    printf("Q2.1 (Using Function Pointer)\n");
    printf("----> Calculate and print Fibonacci Series up to N terms using FUNCTION POINTER. (TSRN)\n\n");
    printf("Solution:-\n\n");

    int n = 8;
    int *ptr = &n;
    printf("Fibonacci Series up to N terms: ");

    void (*fptr)(int *) = &fibonacci;
    (*fptr)(ptr);

    printf("\n\n\n\n\n");
}

//**************************************************************************************
// Q3 - Print Pascal's Triangle (TSRN - Take Something, Return Nothing)
//***************************************************************************************

int factorial(int n)
{ // 鉁� single factorial used everywhere
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

//*** Function to print Pascal's Triangle ***
void PascalTriangle(int *rows)
{
    printf(">>> Pascal's Triangle for %d rows:\n\n", *rows);

    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *rows - i - 1; j++)
            printf("  "); // Leading spaces

        for (int j = 0; j <= i; j++)
            printf("%4d", combination(i, j)); // Numbers in row

        printf("\n");
    }
    printf("\n\n\n");
}

//*** Normal Function Call ***
void f3()
{
    printf("Q3. (Normal Function Call - TSRN)\n");
    printf("Print Pascal's Triangle up to N rows. (TSRN)\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;

    if (ptr != NULL)
        PascalTriangle(ptr);
    else
        printf("Pointer is NULL!\n");
}

//*** Function Pointer Call ***
void f3_()
{
    printf("Q3.1 (Function Pointer Call - TSRN)\n");
    printf("Print Pascal's Triangle up to N rows using FUNCTION POINTER. (TSRN)\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;

    void (*fptr)(int *) = &PascalTriangle;
    (*fptr)(ptr);
}

//***************************************************************************************
// Q4 - Print all Armstrong numbers up to N (Normal & Function Pointer)
//***************************************************************************************

void Armstrong(int *n)
{ // 鉁� changed to void
    int i, sum, count, temp, rem;

    for (i = 1; i <= *n; i++)
    {
        sum = 0;
        count = 0;
        temp = i;

        // Count digits
        int t = temp;
        while (t != 0)
        {
            count++;
            t /= 10;
        }

        // Calculate sum of powers
        t = temp;
        while (t != 0)
        {
            rem = t % 10;
            sum += pow(rem, count);
            t /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}

/** (Using Normal Function Call) **/
void f4()
{
    printf("Q4. Write a function to print all Armstrong numbers up to N using"
           " Normal Function Call. (TSRN)\n\n");
    printf("Solution:-\n\n");

    int n = 1000; // limit
    int *ptr = &n;

    printf("print all Armstrong numbers up to N: ");

    Armstrong(ptr);

   for(int Q = 1; Q <= 4; Q++)
        printf("\n");}

/** (Using Function Pointer) **/
void f4_()
{
    printf("Q4.1 ----> Write a function to print all Armstrong numbers up to N using"
           " FUNCTION POINTER. (TSRN)\n\n");
    printf("Solution:-\n\n");

    int n = 1000;
    int *ptr = &n;
    printf("print all Armstrong numbers up to N: ");

    void (*fptr)(int *) = &Armstrong;
    fptr(ptr);

    printf("\n\n\n\n\n");
}

//***************************************************************************************
// Q5 - Sum of Series (1!/1 + 2!/2 + 3!/3 + ... + n!/n) (Normal & Function Pointer)
//***************************************************************************************

int SeriesSum(int *n)
{ // 鉁� TSRS
    int i, sum = 0;

    for (i = 1; i <= *n; i++)
    {
        sum = sum + factorial(i) / i;
    }

    return sum;
}

/** (Using Normal Function Call) **/
void f5()
{
    printf("Q5. Write a function to find the sum of first N terms of the series "
           "1!/1 + 2!/2 + 3!/3 + ... + n!/n using Normal Function Call. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int n = 5; // you can change value
    int *ptr = &n;

    printf("sum of first N terms of the series: ");
    int result = SeriesSum(ptr);

    for (int i = 1; i <= *ptr; i++)
    {
        if (i == *ptr)
            printf("%d!/%d", i, i);
        else
            printf("%d!/%d + ", i, i);
    }
    printf(" = %d\n", result);

        printf("\n\n\n\n\n");

}

/** (Using Function Pointer) **/
void f5_()
{
    printf("Q5.1 ----> Write a function to find the sum of first N terms of the series "
           "1!/1 + 2!/2 + 3!/3 + ... + n!/n using FUNCTION POINTER. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int n = 5;
    int *ptr = &n;
    printf("sum of first N terms of the series: ");

    int (*fptr)(int *) = &SeriesSum;
    int result = fptr(ptr);

    for (int i = 1; i <= *ptr; i++)
    {
        if (i == *ptr)
            printf("%d!/%d", i, i);
        else
            printf("%d!/%d + ", i, i);
    }
    printf(" = %d\n", result);

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