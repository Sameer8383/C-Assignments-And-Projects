#include<stdio.h>
/** Assignment 13 **/
/** Use any loop */ 

//Q1.
int sum_of_n_natural_numbers(int n)
{
    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
void f1()
{
    printf("**************************************************************************\n");
    printf("Q1. Write a function to calculate sum of first N natural numbers. (TSRN)\n");
    printf("**************************************************************************\n");

    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = sum_of_n_natural_numbers(n);

    printf("Sum of first %d natural numbers is: %d\n", n, sum);   

    printf("\n**************************************************************************\n");
    printf("                          End of Program : 1st                            \n");
    printf("**************************************************************************\n");
}
//Q2.
int sumOfEvenNaturalNumbers(int n)
{
    int i = 1, evenSum = 0;

    while(n >= i)
    {
        evenSum = evenSum + i * 2;
        i++;
    }
    return evenSum;
}
void f2()
{
    printf("**************************************************************************\n");
    printf("Q2. Write a function to calculate sum of first N even natural numbers. (TSRS)\n");
    printf("**************************************************************************\n");

    int n, evenSum;

    printf("Enter a number: ");
    scanf("%d", &n);

    evenSum = sumOfEvenNaturalNumbers(n);

    printf("Sum of first %d even natural numbers is: %d\n", n, evenSum);   

    printf("\n**************************************************************************\n");
    printf("                          End of Program : 2nd                            \n");
    printf("**************************************************************************\n");
}
//Q3.
int sumOfOddNaturalNumbers(int n)
{
    int i = 1, oddSum = 0;

    while(n >= i)
    {
        oddSum = oddSum + (2 * i - 1);
        i++;
    }
    return oddSum;
}
void f3()
{
    printf("**************************************************************************\n");
    printf("Q3. Write a function to calculate sum of first N odd natural numbers. (TSRS)\n");
    printf("**************************************************************************\n");

    int n, oddSum;

    printf("Enter a number: ");
    scanf("%d", &n);

    oddSum = sumOfOddNaturalNumbers(n);

    printf("Sum of first %d odd natural numbers is: %d\n", n, oddSum);   

    printf("\n**************************************************************************\n");
    printf("                          End of Program : 3rd                            \n");
    printf("**************************************************************************\n");
}
//Q4.
int sumOfSquaresOfN_NaturalNumbers(int n)
{
    int i = 1, squareSum = 0;

    while(n >= i)
    {
        squareSum = squareSum + (i * i);
        i++;
    }
    return squareSum;
}
void f4()
{
    printf("**************************************************************************\n");
    printf("Q4. Write a function to calculate sum of squares of first N natural numbers. (TSRS)\n");
    printf("**************************************************************************\n");

    int n, squareSum;

    printf("Enter a number: ");
    scanf("%d", &n);

    squareSum = sumOfSquaresOfN_NaturalNumbers(n);

    printf("Sum of squares of first %d natural numbers is: %d\n", n, squareSum);   

    printf("\n**************************************************************************\n");
    printf("                          End of Program : 4th                            \n");
    printf("**************************************************************************\n");
}
//Q5.
int cubeOfSumOfN_NaturalNumbers(int n)
{
    int i = 1, cubeSum = 0;

    while(n >= i)
    {
        cubeSum = cubeSum + (i * i * i);
        i++;
    }
    return cubeSum;
}
void f5()
{
    printf("**************************************************************************\n");
    printf("Q5. Write a function to calculate sum of cubes of first N natural numbers. (TSRS)\n");
    printf("**************************************************************************\n");

    int n, cubeSum;

    printf("Enter a number: ");
    scanf("%d", &n);

    cubeSum = cubeOfSumOfN_NaturalNumbers(n);

    printf("Sum of cubes of first %d natural numbers is: %d\n", n, cubeSum);   

    printf("\n**************************************************************************\n");
    printf("                          End of Program : 5th                            \n");
    printf("**************************************************************************\n");
}
int main()
{
    f5();
    printf("\n");
    return 0;
}
