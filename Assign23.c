#include <stdio.h>

/* Assignment:-23 Functions */
//*****************************************
//           LCM FUNCTION
//*****************************************
int lcm(int *a, int *b)
{
    int lcm_value;
    for (lcm_value = (*a > *b) ? *a : *b; lcm_value <= (*a) * (*b); lcm_value++)
    {
        if (lcm_value % *a == 0 && lcm_value % *b == 0)
            break;
    }
    return lcm_value;
}

//*****************************************
//*** (Using Normal Function Call) ***
void f1()
{
    printf("\nQ1. (Using Normal Function Call)\n");
    printf("Write a function to calculate LCM of two numbers. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int num1 = 12, num2 = 18;
    int *p1 = &num1, *p2 = &num2;

    int result = lcm(p1, p2); // Normal function call
    printf("LCM of %d and %d is %d\n\n\n", *p1, *p2, result);
}

//*****************************************
//*** (Using Function Pointer) ***
void f1_()
{
    printf("Q1.1 (Using Function Pointer)\n");
    printf("Write a function to calculate LCM of two numbers using FUNCTION POINTER. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int num1 = 12, num2 = 18;
    int *p1 = &num1, *p2 = &num2;

    // Declare function pointer
    int (*fptr)(int *, int *) = &lcm;

    // Call LCM using function pointer
    int result = fptr(p1, p2);

    printf("LCM of %d and %d is %d", num1, num2, result);

    for(int Q = 1; Q <= 4; Q++)
        printf("\n");
}
//*****************************************
//           HCF FUNCTION
//*****************************************
int hcf(int *a, int *b)
{
    int hcf_value = 1;

    // FIXED CONDITION
    for (hcf_value = (*a < *b) ? *a : *b; hcf_value >= 1; hcf_value--)
    {
        if (*a % hcf_value == 0 && *b % hcf_value == 0)
            break;
    }
    return hcf_value;
}

//*****************************************
//*** (Using Normal Function Call) ***
void f2()
{
    printf("Q2. (Using Normal Function Call)\n");
    printf("Write a function to calculate HCF of two numbers. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int num1 = 12, num2 = 18;
    int *p1 = &num1, *p2 = &num2;

    int result = hcf(p1, p2); // Normal function call
    printf("HCF of %d and %d is %d\n\n\n", num1, num2, result);
}

//*****************************************
//*** (Using Function Pointer) ***
void f2_()
{
    printf("Q2.1 (Using Function Pointer)\n");
    printf("Write a function to calculate HCF of two numbers using FUNCTION POINTER. (TSRS)\n\n");
    printf("Solution:-\n\n");

    int num1 = 12, num2 = 18;
    int *p1 = &num1, *p2 = &num2;

    // Declare function pointer
    int (*fptr)(int *, int *) = &hcf;

    // Call HCF using function pointer
    int result = fptr(p1, p2);

    printf("HCF of %d and %d is %d\n\n\n\n", num1, num2, result);
}

//*****************************************
//           PRIME CHECK FUNCTION
//*****************************************
int isPrime(int *n)
{
    int num = *n;

    if (num <= 1)
        return 0; // Not prime

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

//*****************************************
//*** (Using Normal Function Call) ***
void f3()
{
    printf("Q3. (Using Normal Function Call)\n");
    printf("Write a function to check if a number is prime. (TSRS)\n\n");

    int num = 8;
    int *p = &num;

    int result = isPrime(p);

    if (result)
        printf("%d is a prime number.\n\n\n", num);
    else
        printf("%d is not a prime number.\n\n\n", num);
}

//*****************************************
//*** (Using Function Pointer) ***
void f3_()
{
    printf("Q3.1 (Using Function Pointer)\n");
    printf("Write a function to check if a number is prime using FUNCTION POINTER. (TSRS)\n\n");

    int num = 29;
    int *p = &num;

    int (*fptr)(int *) = &isPrime;

    int result = fptr(p);

    if (result)
        printf("%d is a prime number.\n\n\n\n", num);
    else
        printf("%d is not a prime number.\n\n\n\n", num);
}

//*****************************************
//           NEXT PRIME FUNCTION
//*****************************************
int nextPrime(int *n)
{
    int i, j, prime;

    for (i = *n + 1;; i++)
    {
        prime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
            return i;
    }
}

//*****************************************
//*** (Using Normal Function Call) ***
void f4()
{
    printf("Q4. Find (Next Prime - Normal Function Call)\n");

    int num = 7;
    int *p = &num;

    int next = nextPrime(p);
    printf("Next prime after %d is %d\n\n", num, next);
}

//*****************************************
//*** (Using Function Pointer) ***
void f4_()
{
    printf("Q4.1 Find (Next Prime - Function Pointer)\n");

    int num = 29;
    int *p = &num;

    int (*fptr)(int *) = &nextPrime;
    int next = fptr(p);

    printf("Next prime after %d is %d\n\n\n\n", num, next);
}

//*****************************************
//       FIRST N PRIME NUMBERS FUNCTION
//*****************************************
void firstNPrimeNumbers(int *n)
{
    int count = 0, num = 2;

    while (count < *n)
    {
        int prime = 1;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }
}

//*****************************************
//*** f5 - Normal Call ***
//*****************************************
void f5()
{
    printf("Q5. Print first N prime numbers (Normal Function Call)\n");

    int n = 10;
    int *p = &n;

    printf("First %d prime numbers are:\n", n);
    firstNPrimeNumbers(p);

    printf("\n\n");
}

//*****************************************
//*** f5_ - Function Pointer Call ***
//*****************************************
void f5_()
{
    printf("Q5.1 Print first N prime numbers (Function Pointer)\n");

    int n = 10;
    int *p = &n;

    void (*fptr)(int *) = &firstNPrimeNumbers;

    printf("First %d prime numbers are:\n", n);
    fptr(p);

    printf("\n\n");
}

//*****************************************
//                   MAIN
//*****************************************
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
