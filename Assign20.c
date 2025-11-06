#include <stdio.h>
#include <stdlib.h>

// Function declarations
int fact(int n);
int sumN(int n);
int isPrime(int n);
int sumDigits(int n);
int LCM(int a, int b);
void menu();
void menu2();

// Q1: Grade Calculation
void f1()
{
    printf("Q1. Write a program to find and display grade obtained by a student in a test.\n\n");
    printf("Solution :- \n\n");

    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Grade A\n");
        break;
    case 8:
        printf("Grade B\n");
        break;
    case 7:
        printf("Grade C\n");
        break;
    case 6:
        printf("Grade D\n");
        break;
    case 5:
        printf("Grade E\n");
        break;
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        if (marks >= 0)
            printf("Grade F\n");
        else
            printf("Invalid Marks\n");
        break;
    default:
        printf("Invalid Marks\n");
    }
}

// Q2: Menu Driven Program 1
void f2()
{
    printf("Q2. Menu driven program.\n\n");
    printf("Solution :- \n\n");
    menu();
}

// Q3: Character check
void f3()
{
    printf("Q3. Check character is uppercase, lowercase, or special.\n\n");
    printf("Solution :- \n\n");

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Alphabet\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Alphabet\n");
    else
        printf("Special Character\n");
}

// Q4: Check vowel/consonant/special
void f4()
{
    printf("Q4. Check whether character is vowel, consonant or special.\n\n");
    printf("Solution :- \n\n");

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("Vowel\n");
        break;
    default:
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            printf("Consonant\n");
        else
            printf("Special Character\n");
    }
}

// Q5: Menu Driven Program 2
void f5()
{
    printf("Q5. Menu driven program.\n\n");
    printf("Solution :- \n\n");
    menu2();
}

// Main function
int main()
{
    printf("***************************************\n");
    printf("\t   Assignment :- 20\n");
    printf("\t switch case control\n");
    printf("***************************************\n\n");

    f1();
    printf("\n\n---------------------------------------\n\n");
    f2();
    printf("\n\n---------------------------------------\n\n");
    f3();
    printf("\n\n---------------------------------------\n\n");
    f4();
    printf("\n\n---------------------------------------\n\n");
    f5();

    return 0;
}

// factorial
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// sum of first n natural numbers
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

// check prime
int isPrime(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

// sum of digits
int sumDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// LCM of two numbers
int LCM(int a, int b)
{
    int m = (a > b) ? a : b;
    while (1)
    {
        if (m % a == 0 && m % b == 0)
            return m;
        m++;
    }
}

// Menu 1 (non-recursive)
void menu()
{
    int choice, n;
    float r;

    while (1)
    {
        printf("\n============================\n");
        printf(" 1. Factorial of a number\n");
        printf(" 2. Check Even or Odd\n");
        printf(" 3. Area of Circle\n");
        printf(" 4. Sum of first N numbers\n");
        printf(" 5. Exit\n");
        printf("============================\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Factorial = %d\n", fact(n));
            break;
        case 2:
            printf("Enter number: ");
            scanf("%d", &n);
            if (n % 2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%f", &r);
            printf("Area = %.2f\n", 3.14159 * r * r);
            break;
        case 4:
            printf("Enter N: ");
            scanf("%d", &n);
            printf("Sum = %d\n", sumN(n));
            break;
        case 5:
            printf("Exiting Menu 1...\n");
            return;
        default:
            printf("Invalid choice!\n");
        }
    }
}

// Menu 2 (non-recursive)
void menu2()
{
    int choice, a, b, n;

    while (1)
    {
        printf("\n============================\n");
        printf(" 1. LCM of two numbers\n");
        printf(" 2. Sum of digits of a number\n");
        printf(" 3. Volume of a cuboid\n");
        printf(" 4. Check Prime or Not\n");
        printf(" 5. Exit\n");
        printf("============================\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("LCM = %d\n", LCM(a, b));
            break;
        case 2:
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Sum of digits = %d\n", sumDigits(n));
            break;
        case 3:
            printf("Enter length, breadth, height: ");
            scanf("%d %d %d", &a, &b, &n);
            printf("Volume = %d\n", a * b * n);
            break;
        case 4:
            printf("Enter number: ");
            scanf("%d", &n);
            if (isPrime(n))
                printf("Prime\n");
            else
                printf("Not Prime\n");
            break;
        case 5:
            printf("Exiting Menu 2...\n");
            return;
        default:
            printf("Invalid choice!\n");
        }
    }
}
