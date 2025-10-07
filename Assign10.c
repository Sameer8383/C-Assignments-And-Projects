#include <stdio.h>

/** Assignment:- 10 **/
/** More on Decision Control Statements. **/

// Q1
void f1()
{
    printf("**********************************************************************\n");
    printf("Q1. WAP to check whether a given number is positive, negative or zero\n");
    printf("**********************************************************************\n\n");

    int y = 0;

    if (y > 0)
        printf("------> Positive Number\n");
    else if (y < 0)
        printf("------> Negative Number\n");
    else
        printf("------> Zero\n");

    printf("\n");
    printf("*************************************************************************\n");
    printf("                     END OF QUESTION 1st\n");
    printf("*************************************************************************\n");

    int i = 1;
    while (i <= 5)
    {
        printf("\n");
        i++;
    }
}

// Q2
void f2()
{
    printf("*******************************************************************\n");
    printf("Q2. WAP to check whether a given character is an alphabet (uppercase)\n");
    printf("    alphabet (lowercase), a digit or a special character\n");
    printf("*******************************************************************\n\n");

    char ch = '$';

    if (ch >= 'A' && ch <= 'Z')
        printf("------> '%c' comes under Uppercase Alphabet\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("------> '%c' comes under Lowercase Alphabet\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("------> '%c' is a Digit\n", ch);
    else
        printf("------> '%c' is a Special Character\n", ch);

    printf("\n");
    printf("*********************************************************************\n");
    printf("                   END OF QUESTION 2nd\n");
    printf("*********************************************************************\n");

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
    printf("*********************************************\n");
    printf("Q3. WAP which takes the length of the sides\n");
    printf("    of a triangle as an input. Display whether\n");
    printf("    the triangle is valid or not.\n");
    printf("*********************************************\n\n");

    int a = 5, b = 6, c = 9;

    if (a + b > c && b + c > a && c + a > b)
        printf("------> Valid Triangle\n");
    else
        printf("------> NOT a Valid Triangle\n");

    printf("\n");
    printf("*******************************************\n");
    printf("          END OF QUESTION 3rd\n");
    printf("*******************************************\n");

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
    printf("***********************************************\n");
    printf("Q4. WAP which takes the month number as input\n");
    printf(" and displays the number of days in that month\n");
    printf("************************************************\n\n");

    int month = 6;

    if (month == 2)
        printf("------> 28 or 29 days\n");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("------> 30 days\n");
    else if (month >= 1 && month <= 12)
        printf("------> 31 days\n");
    else
        printf("------> Invalid Month Number\n");

    printf("\n");
    printf("**********************************************\n");
    printf("          END OF QUESTION 4th\n");
    printf("**********************************************\n");

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
    return 0;
}
