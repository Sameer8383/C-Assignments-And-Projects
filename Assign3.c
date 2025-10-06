#include <stdio.h>

/** Assignment:- 3 */
/** printf and scanf */

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");
    printf("Q.1 WAP to input a character from user and print its ASCII value\n\n");
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII value of %c = %d\n", ch, ch);
    printf("\n");
    printf("**************************** END OF QUESTION 1st ****************************\n");
    printf("\n");

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
    printf("Q.2 WAP to input an ASCII value from user and print its character\n\n");

    int ascii;
    printf("Enter ASCII value: ");
    scanf("%d", &ascii);
    printf("Character of ASCII value %d = '%c'\n", ascii, ascii);
    printf("\n");
    printf("**************************** END OF QUESTION 2nd ****************************\n");
    printf("\n");

    int i = 1;
    do
    {
        printf("\n");
        i++;
    } while (i <= 4);
}

// Q3
void f3()
{
    printf("\n****************************************************************************\n\n");
    printf("Q.3 WAP to input three characters from user and print their ASCII values\n\n");

    char ch1, ch2, ch3;
    printf("Enter three characters: ");
    scanf(" %c %c %c", &ch1, &ch2, &ch3);

    printf("ASCII value of %c = %d\n", ch1, ch1);
    printf("ASCII value of %c = %d\n", ch2, ch2);
    printf("ASCII value of %c = %d\n", ch3, ch3);
    printf("\n");
    printf("\n");
    printf("**************************** END OF QUESTION 3rd ****************************\n");
    printf("\n");

    for (int i = 1; i <= 4; i++)
    {
        printf("\n");
    }
}

// Q4
void f4()
{
    printf("\n****************************************************************************\n\n");
    printf("Q.4 WAP to print last digit of a given number\n\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;
    printf("%d is the last digit of %d\n", lastDigit, num);
    printf("\n");
    printf("**************************** END OF QUESTION 4th ****************************\n");
    printf("\n");

    for (int i = 1; i <= 4; i++)
    {
        printf("\n");
    }
}

// Q5
void f5()
{
    printf("\n****************************************************************************\n\n");
    printf("Q.5 WAP to print a given number without its last digit\n\n");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int Quotient = n / 10;
    printf("Removing the last digit from %d, the remaining number is %d\n", n, Quotient);
    printf("\n");
    printf("\n");
    printf("**************************** END OF QUESTION 5th ****************************\n");
    printf("\n");

    for (int i = 1; i <= 4; i++)
    {
        printf("\n");
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