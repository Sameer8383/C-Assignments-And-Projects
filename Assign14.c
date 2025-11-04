#include <stdio.h>

/** Assignment 14 **/
/** Use any loop **/

// Q1: Factorial
void f1()
{
    printf("*******************************************************\n");
    printf("Q1. Write a program to calculate factorial of a number.\n");
    printf("*******************************************************\n\n");

    int i = 1, n = 5, fact = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("Factorial of %d! = %d\n", n, fact);

    printf("\n******************************************************\n");
    printf("                      End of Q1\n");
    printf("******************************************************\n");

    for (int Q = 1; Q <= 3; Q++)
    {
        printf("\n");
    }
}

// Q2: Count digits
void f2()
{
    printf("*******************************************************\n");
    printf("Q2. Write a program to count digits in a given number.\n");
    printf("*******************************************************\n\n");

    int num = 674, rem, count = 0;
    int temp = num;
    while (num != 0)
    {
        rem = num % 10;
        count++;
        num /= 10;
    }
    printf("Total %d digits in the number %d\n", count, temp);

    printf("\n******************************************************\n");
    printf("                      End of Q2\n");
    printf("******************************************************\n");

    for (int Q = 1; Q <= 3; Q++)
    {
        printf("\n");
    }
}

// Q3: Prime check
void f3()
{
    printf("*******************************************************\n");
    printf("Q3. Write a program to check if a number is prime.\n");
    printf("*******************************************************\n\n");

    int n = 13, i = 1, prime = 0;
    while (n >= i)
    {
        if (n % i == 0)
            prime++;
        i++;
    }

    if (prime == 2)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is NOT a Prime number\n", n);

    printf("\n******************************************************\n");
    printf("                      End of Q3\n");
    printf("******************************************************\n");

    for (int Q = 1; Q <= 3; Q++)
    {
        printf("\n");
    }
}

// Q4: LCM of two numbers
void f4()
{
    printf("*******************************************************\n");
    printf("Q4. Write a program to calculate LCM of two numbers.\n");
    printf("*******************************************************\n\n");

    int a = 8, b = 6, lcm;

    printf("Step 1:\n");
    for (lcm = 1; lcm <= 100; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM of %d and %d = %d\n", a, b, lcm);
            break;
        }
    }
    printf("\n******************************************************\n");
    printf("                      End of Q4\n");
    printf("******************************************************\n");

    for (int Q = 1; Q <= 3; Q++)
    {
        printf("\n");
    }
}

// Step 2
void f4_1()
{
    printf("*******************************************************\n");
    printf("Q4.1 Write a program to calculate LCM of two numbers.\n");
    printf("*******************************************************\n\n");

    printf("\nStep 2:\n");
    int lcm, a = 8, b = 6;
    for (lcm = 1; lcm <= a * b; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM of %d and %d = %d\n", a, b, lcm);
            break;
        }
    }
    printf("\n******************************************************\n");
    printf("                      End of Q4.2\n");
    printf("******************************************************\n");

    for (int Q = 1; Q <= 3; Q++)
    {
        printf("\n");
    }
}

// Step 3
void f4_2()
{
    printf("*******************************************************\n");
    printf("Q4.2 Write a program to calculate LCM of two numbers.\n");
    printf("*******************************************************\n\n");

    printf("\nStep 3:\n");
    int lcm, a = 8, b = 6;
    for (lcm = (a < b) ? a : b; lcm <= a * b; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM of %d and %d = %d\n", lcm);
            break;
        }
    }
    printf("\n******************************************************\n");
    printf("                      End of Q4.3\n");
    printf("******************************************************\n");

    for (int Q = 1; Q <= 3; Q++)
    {
        printf("\n");
    }
}

// Q5: Reverse number
void f5()
{
    printf("*******************************************************\n");
    printf("Q5. Write a program to reverse a given number.\n");
    printf("*******************************************************\n\n");

    int num = 132, rem, rev = 0;
    int temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("The reverse of %d is %d\n", temp, rev);

    printf("\n******************************************************\n");
    printf("                      End of Q5\n");
    printf("******************************************************\n");

    for (int Q = 1; Q <= 3; Q++)
    {
        printf("\n");
    }
}

// MAIN
int main()
{
    printf("*********************************************************\n");
    printf("              📘 Assignment :- 14\n");
    printf("              🔁 Use any Loop\n");
    printf("*********************************************************\n\n");

    f5();

    return 0;
}