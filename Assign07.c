#include <stdio.h>

/** Assignment:- 7 **/
/** Decision Control Statements. **/

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");
    printf("Q1. WAP to check whether a given number is positive or non-positive.\n\n");

    int num = 0;

    if (num > 0)
        printf("%d is a positive number.\n", num);
    else
        printf("%d is a non-positive number.\n", num);

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
    printf("Q2. WAP to check whether a given number is divisible by 5 or not.\n\n");

    int num = 10;

    if (num % 5)
        printf("%d is not divisible by 5.\n", num);
    else
        printf("%d is divisible by 5.\n", num);

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
    printf("Q3. WAP to check whether a given number is an even number or an odd number.\n\n");

    int num = 12;

    if (num % 2)
        printf("%d is an Odd number.\n", num);
    else
        printf("%d is an Even number.\n", num);

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
    printf("Q4. WAP to check whether a given number is an even number or an odd number without using %% operator.\n\n");

    int num = 4;

    if (num / 2 * 2 == num)
        printf("%d is an Even number.\n", num);
    else
        printf("%d is an Odd number.\n", num);

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
    printf("Q5. WAP to check whether a given number is an even number or an odd number using bitwise operator.\n\n");

    int num = 6;

    if ((num & 1) == 0)
        printf("%d is an Even number.\n", num);
    else
        printf("%d is an Odd number.\n", num);

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
