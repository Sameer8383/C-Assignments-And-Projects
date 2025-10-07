#include <stdio.h>

/** Assignment:- 9 **/
/** Decision Control Statements. */

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");
    printf("Q1. WAP which takes the cost price and selling price of a product from the user. Now\n");
    printf("    calculate and print profit and loss percentage.\n\n");

    float sp = 23, cp = 13, Profit, Loss;

    if (sp > cp)
    {
        Profit = (sp - cp) / cp * 100;
        printf("Profit%% = %.2f%%\n", Profit);
    }
    else if (cp > sp)
    {
        Loss = (cp - sp) / cp * 100;
        printf("Loss%% = %.2f%%\n", Loss);
    }
    else
    {
        printf("No Profit No Loss.\n");
    }

    printf("\n");
    printf("**************************** END OF QUESTION 1st ****************************");

    int i = 1;
    while (i < 6)
    {
        i++;
        printf("\n");
    }
}

// Q2
void f2()
{
    printf("****************************************************************************\n\n");
    printf("Q2. WAP to take marks of 5 subjects from the user. Assume marks are given out of \n");
    printf("    100 and passing marks is 33. Now display whether the candidate passed the\n");
    printf("    examination or failed.\n\n");

    float Math = 96, Eng = 89, Hin = 31, Sci = 93, Com = 99;

    if (Math < 33 || Eng < 33 || Hin < 33 || Sci < 33 || Com < 33)
        printf("Candidate Failed ❌\n");
    else
        printf("Candidate Passed ✅\n");

    printf("\n");
    printf("**************************** END OF QUESTION 2nd ****************************");

    int j = 1;
    do
    {
        printf("\n");
        j++;
    } while (j <= 5);
}

// Q3
void f3()
{
    printf("****************************************************************************\n\n");
    printf("Q3. WAP to check whether a given alphabet is in uppercase or lowercase.\n\n");

    char ch = 'a';

    if (ch >= 'A' && ch <= 'Z')
        printf("Character comes under Uppercase.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Character comes under Lowercase.\n");
    else
        printf("It is not an Alphabet.\n");

    printf("\n");
    printf("**************************** END OF QUESTION 3rd ****************************");

    for (int y = 1; y <= 5; y++)
    {
        printf("\n");
    }
}

// Q4
void f4()
{
    printf("****************************************************************************\n\n");
    printf("Q4. WAP to check whether a given number is divisible by 3 and divisible by 2.\n\n");

    int num = 18;

    if (num % 2 == 0 && num % 3 == 0)
        printf("%d is divisible by both 2 and 3.\n", num);
    else if (num % 2 == 0)
        printf("%d is divisible only by 2.\n", num);
    else if (num % 3 == 0)
        printf("%d is divisible only by 3.\n", num);
    else
        printf("%d is NOT divisible by 2 or 3.\n", num);

    printf("\n");
    printf("**************************** END OF QUESTION 4th ****************************");

    for (int x = 1; x <= 5; x++)
    {
        printf("\n");
    }
}

// Q5
void f5()
{
    printf("****************************************************************************\n\n");
    printf("Q5. WAP to check whether a given number is divisible by 7 or divisible by 3.\n\n");

    int n = 14;

    if (n % 7 == 0 && n % 3 == 0)
        printf("%d is divisible by both 7 and 3.\n", n);
    else if (n % 7 == 0)
        printf("%d is divisible only by 7.\n", n);
    else if (n % 3 == 0)
        printf("%d is divisible only by 3.\n", n);
    else
        printf("%d is NOT divisible by 7 or 3.\n", n);

    printf("\n");
    printf("**************************** END OF QUESTION 5th ****************************");

    for (int z = 1; z <= 5; z++)
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
