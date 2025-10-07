#include <stdio.h>

/** Assignment:- 4 **/
/** Operators in C Language */

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");
    printf("Q1. WAP to calculate size of character constant.\n\n");

    char ch = '0';

    printf("Size of declared variable of char data type = %lu bytes\n", sizeof(ch));
    printf("Size of character constant = %lu bytes\n", sizeof('0'));
    printf("\n");
    printf("**************************** END OF QUESTION 1st ****************************");

    int i = 1;
    while (i <= 5)
    {
        i++;
        printf("\n");
    }
}

// Q2
void f2()
{
    printf("\n****************************************************************************\n\n");
    printf("Q2. WAP to calculate size of real constant.\n\n");

    double d = 3.14;

    printf("Size of declared variable of double data type = %lu bytes\n", sizeof(d));
    printf("Size of float = %lu bytes\n", sizeof(3.14f));
    printf("Size of double = %lu bytes\n", sizeof(3.14));
    printf("Size of long double = %lu bytes\n", sizeof(3.14L));
    printf("\n");
    printf("**************************** END OF QUESTION 2nd ****************************");

    int i = 1;
    do
    {
        printf("\n");
        i++;
    } while (i < 6);
}

// Q3
void f3()
{
    printf("*************************************************************************************\n\n");
    printf("Q3. WAP with one char type variable. Assign 'A' in the variable.now change the value\n");
    printf("    of variable from 'A' to 'B' using increment operator.\n\n");

    char ch = 'A';

    printf("Character before using increment operator is '%c'\n", ch);
    ch++;
    printf("Character after using increment operator is '%c'\n", ch);
    printf("\n");

    printf("****************************** END OF QUESTION 3rd ******************************");
    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
    }
}

// Q4
void f4()
{
    printf("****************************************************************************\n\n");
    printf("Q4. WAP to swap values of two int variables.\n\n");

    int a = 12;
    int b = 5;
    int temp;

    printf("Value before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("Value after swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("\n");
    printf("**************************** END OF QUESTION 4th ****************************");

    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
    }
}

// Q5
void f5()
{
    printf("****************************************************************************\n\n");
    printf("Q5. WAP to swap values of two int variables.Without using third variable.\n\n");

    int a = 21;
    int b = 9;

    printf("Value before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value after swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("\n");
    printf("**************************** END OF QUESTION 5th ****************************");

    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
    }
}

// Q6
void f6()
{
    printf("***********************************************************************************\n\n");
    printf("Q6. WAP to swap values of two int variables.Without using third variable and without\n");
    printf("    using +,- operator.\n\n");

    int a = 8;
    int b = 17;

    printf("Value before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("Value after swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("\n");
    printf("*************************** END OF QUESTION 6th ****************************");

    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
    }
}

// Q7
void f7()
{
    printf("************************************************************************************************\n\n");
    printf("Q7. WAP to swap values of two int variables.Without using third variable and arithmetic operator.\n\n");

    int a = 54;
    int b = 49;

    printf("Value before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Value after swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("\n******************************** END OF QUESTION 7th *******************************************");

    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
    }
}

// Q8
void f8()
{
    printf("****************************************************************************\n\n");
    printf("Q8. WAP to swap values of two int variables.in a single line arithmetic expression.\n\n");

    int a = 6;
    int b = 3;

    printf("Value before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = a + b - (b = a);

    printf("Value after swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("\n**************************** END OF QUESTION 8th ****************************\n\n");
}

// MAIN
int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    return 0;
}