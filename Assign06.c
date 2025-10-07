#include <stdio.h>

/** Assignment:- 6 **/
/** More on Operators in C Language. **/

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");
    printf("Q1. Assume price of 1 USD is INR 84.23. WAP to take the amount in INR and convert it into USD.\n\n");

    printf("INR = 500\n");
    printf("USD_RATE = 84.23₹\n");
    printf("convertedUSD = 500 / 84.23\n");

    float INR = 500;
    float USD_RATE = 84.23;
    float convertedUSD = INR / USD_RATE;

    printf("\nConverting Amount: INR = %.2f₹ to USD = %.2f$\n", INR, convertedUSD);

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
    printf("Q2. WAP to take a three digit number from the user and rotate its digit by one position\n");
    printf("    towards the right.\n\n");

    int num = 234;

    printf("Value of {num = %d} before using executable expression.\n", num);

    int rem = (num % 10) * 100 + num / 10;

    printf("\nrem = (%d %% 10) *100 + %d\n",num, num);

    printf("\nValue of {rem = %d} after using executable expression.\n", rem);

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
    printf("Q3. What will be the value stored in the variable X after executing the following statement:\n\n");
   
    printf("X = 10 > 8 > 4\n");

    int x = 10 > 8 > 4;

    printf("Value of X = %d\n", x);

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
    printf("Q4. What will be the value stored in the variable X after executing the following statement:\n\n");
    printf("X = !2 > -2\n\n");

    int x = !2 > -2;

    printf("Value of X = %d\n", x);

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
    printf("Q5. What will be the value stored in the variable X after executing the following statement:\n\n");
    printf("X = 3 < 0 && 5 > 0\n\n");

    int x = 3 < 0 && 5 > 0;

    printf("Value of X = %d\n", x);

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
