#include <stdio.h>

/** Assignment:- 2 **/
/** Printf and scanf **/

// Q1
void f1()
{
    printf("\n****************************************************************************\n\n");

    printf("Q1. WAP to calculate average of Given 3 integers. Numbers are given by the user.\n\n");

    int num = 123;
    int sum = 0;

    printf("num = 123;\n");
    printf("sum = 0;\n\n");

    sum = sum + num / 100 + (num / 10) % 10 + num % 10;

    printf("Sum = 0 + %d/100 + (%d/10)%%10 + %d%%10\n", num, num, num);
    printf("Sum = %d\n", sum);

    float avg = sum / 3.0;

    printf("Average = sum / 3.0\n");
    printf("Average = %d/3.0\n", sum);
    printf("Average = %.2f ans.\n", avg);
    printf("\n");
    printf("**************************** END OF QUESTION 1st ****************************\n");
    printf("\n");

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
    printf("\n****************************************************************************\n\n");
    printf("Q2. WAP to calculate circumference of a circle.\n\n");

    float radius = 12;
    float pi = 3.14;

    printf("r(radius) = 12 cm\n");
    printf("pi(π) = 3.14\n\n");

    float cf = 2 * pi * radius;

    printf("C.F = 2*pi*r cm\n");
    printf("C.F = 2*%.2f*%.2f cm\n", pi, radius);
    printf("C.F = %.2f cm ans.\n", cf);
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
    printf("Q3. WAP to calculate simple interest.\n");

    float p_amount = 500000;
    float rate = 16;
    int time = 5;

    printf("p_amount = 500000\n");
    printf("rate     = 16%%\n");
    printf("time     = 5 yrs\n\n");

    float SI = p_amount * rate * time / 100.0;

    printf("Simple Interest  =  p_amount * rate * time/100.0\n");
    printf("Simple Interest  =  %.2f ₹ * %.2f%% * %d yrs\n", p_amount, rate, time);
    printf("Simple  Interest =  %.2f ₹ ans.\n", SI);
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
    printf("Q4. WAP to Calculate volume of a cuboid.\n");

    float length = 12.5;
    float breadth = 6.7;
    float height = 8.2;

    printf("length of cuboid   =  12.5 cm\n");
    printf("breadth of cuboid  =  6.7 cm\n");
    printf("height of cuboid   =  8.2 cm\n\n");

    float volume = length * breadth * height;

    printf("Volume of cuboid   =  length * breadth * height\n");
    printf("Volume of cuboid   =  %.2f cm * %.2f cm * %.2f cm\n", length, breadth, height);
    printf("Volume of cuboid   =       %0.2f cm^3 ans.\n", volume);
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
    printf("Q5. WAP to ask user about the cost price and selling price of banana per dozen.\n");
    printf("Calculate the profit or loss earned upon 25 bananas.\n\n");

    float cp = 40.00;
    float sp = 60.00;

    printf("Cost price per dozen    = %.2f ₹\n", cp);
    printf("Selling price per dozen = %.2f ₹\n\n", sp);

    float Profit_or_Loss = cp - sp;

    printf("Profit or Loss on 25 bananas = (%.2f - %.2f) / 12 * 25\n", cp, sp);
    printf("Profit or Loss on 25 bananas = %.2f%% ans.\n", (Profit_or_Loss / 12.0) * 25);
    printf("\n");
    printf("**************************** END OF QUESTION 5th ****************************\n");
    printf("\n");
    for (int i = 1; i <= 4; i++)
    {
        printf("\n\n");
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