#include <stdio.h>

/** Assignment:- 8 **/
/** Decision Control Statements. **/

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");
    printf("Q1. WAP to check whether a given number is a 3-digit number or not.\n\n");

    int num = 345;

    if (num >= 100 && num <= 999)
        printf("Yes, %d is a 3-digit number.\n", num);
    else
        printf("No, %d is not a 3-digit number.\n", num);

    printf("\n");
    printf("**************************** END OF QUESTION 1st ****************************");

    int i = 1;
    while (i < 6)
    {
        printf("\n");
        i++;
    }
}

// Q2
void f2()
{
    printf("\n****************************************************************************\n\n");
    printf("Q2. WAP to print greater between two numbers. Print one number if both are the same.\n\n");

    int a = 12, b = 13;

    if (a > b)
        printf("%d is greater.\n", a);
    else if (b > a)
        printf("%d is greater.\n", b);
    else
        printf("Both numbers are equal.\n");

    printf("\n");
    printf("**************************** END OF QUESTION 2nd ****************************");

    int i = 1;
    while (i <= 5)
    {
        printf("\n");
        i++;
    }
}

// Q3
void f3()
{
    printf("\n****************************************************************************\n\n");
    printf("Q3. WAP to check whether roots of a given Quadratic equation are real & distinct, real & equal, or imaginary.\n\n");

    float a = 1, b = -5, c = 6;
    float D = b * b - 4 * a * c;

    if (D > 0)
        printf("The equation %.fx² + %.fx + %.f = 0 has real and distinct roots.\n", a, b, c);
    else if (D == 0)
        printf("The equation %.fx² + %.fx + %.f = 0 has real and equal roots.\n", a, b, c);
    else
        printf("The equation %.fx² + %.fx + %.f = 0 has imaginary roots.\n", a, b, c);

    printf("\n");
    printf("**************************** END OF QUESTION 3rd ****************************");

    int i = 1;
    while (i <= 5)
    {
        printf("\n");
        i++;
    }
}

// Q4
void f4()
{
    printf("\n****************************************************************************\n\n");
    printf("Q4. WAP to check whether a given year is a leap year or not.\n\n");

    int year = 2000;

    if (year % 400 == 0)
        printf("%d is a Leap Year.\n", year);
    else if (year % 100 == 0)
        printf("%d is NOT a Leap Year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is NOT a Leap Year.\n", year);

    printf("\n");
    printf("**************************** END OF QUESTION 4th ****************************");

    int i = 1;
    while (i <= 5)
    {
        printf("\n");
        i++;
    }
}

// Q5
void f5()
{
    printf("\n****************************************************************************\n\n");
    printf("Q5. WAP to find the greatest among three given numbers. Print the number once even if it appears more than once.\n\n");

    int a = 10, b = 12, c = 13;

    if (a >= b && a >= c)
        printf("%d is the greatest number.\n", a);
    else if (b >= a && b >= c)
        printf("%d is the greatest number.\n", b);
    else
        printf("%d is the greatest number.\n", c);

    printf("\n");
    printf("**************************** END OF QUESTION 5th ****************************");

    int i = 1;
    while (i <= 5)
    {
        printf("\n");
        i++;
    }
}

// MAIN
int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    return 0;
}
