#include <stdio.h>

/** Assignment:- 5 **/
/** More on Operators in C Language **/

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");
    printf("Q1. WAP to input a three digit number and display the sum of the digits.\n\n");

    int n = 152;
    int sum = 0;

    sum = sum + n / 100 + (n % 100) / 10 + n % 10;

    printf("Sum of %d/100 + (%d%%100)/10 + %d%%10 = %d\n", n, n, n, sum);
    printf("\n");
    printf("**************************** END OF QUESTION 1st ****************************");

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
    printf("\n****************************************************************************\n\n");
    printf("Q2. WAP to find the ASCII code of a character '+'.\n\n");

    char ch = '+';
    printf("ASCII code of character '%c' = %d\n", ch, ch);

    printf("\n");
    printf("**************************** END OF QUESTION 2nd ****************************");

    int i = 1;
    do
    {
        printf("\n");
        i++;
    } while (i <= 5);
}

// Q3
void f3()
{
    printf("\n****************************************************************************\n\n");
    printf("Q3. WAP to print size of an int, a float, a char and a double type variable.\n\n");

    printf("Size of int variable = %lu bytes\n", sizeof(int));
    printf("Size of float variable = %lu bytes\n", sizeof(float));
    printf("Size of char variable = %lu bytes\n", sizeof(char));
    printf("Size of double variable = %lu bytes\n", sizeof(double));

    printf("\n");
    printf("**************************** END OF QUESTION 3rd ****************************");

    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
    }
}

// Q4
void f4()
{
    printf("\n****************************************************************************\n\n");
    printf("Q4. WAP to make the last digit of a number stored in a variable as zero.\n");
    printf("   (Example - if x = 2345 then make it x = 2340)\n\n");

    int t = 2345;

    printf("Value of {t = %d} before using executable expression:\n", t);

    //t = (t / 10) * 10;

    int store = (t - (t%10));

    printf("\n%d = %d - %d%%10 = %d\n",t,t,t,store);

    printf("\nValue {t = %d} after using executable expression:\n", store);

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
    printf("\n************************************************************************************\n\n");
    printf("Q5. WAP to input a number from the user and also input a digit. Append a digit\n");
    printf("    in the number and print the resulting number. (Example - number = 234 and digit = 9\n");
    printf("    then the resulting number is 2349).\n\n");

    int num = 234;
    int digit = 9;

    printf("Value of num is %d before combining digit %d into num:\n\n", num, digit);
    int sum = num * 10 + digit;
    printf("Summation after combining %d into %d = %d:\n", digit, num, sum);

    printf("\n");
    printf("******************************** END OF QUESTION 5th ********************************");

    for (int i = 1; i <= 5; i++)
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
