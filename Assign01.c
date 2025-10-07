#include <stdio.h>

/** Assignment:- 1st **/
/** Input and Output in C Language. */

// Q1
void f1()
{
    printf("\n****************************************************************************\n");
    printf("\nQ1. WAP to print Hello Students on the screen.\n\n");
    printf("Hello Students!\n");
    printf("\n");
    printf("**************************** END OF QUESTION 1st ****************************\n");
    printf("\n\n\n\n");
}

// Q2
void f2()
{
    printf("\n****************************************************************************\n");
    printf("\nQ2. WAP to print Hello in the first line and Students in the second line.\n\n");
    printf("Hello\n\tStudents!\n");
    printf("*\n");
    printf("**************************** END OF QUESTION 2nd ****************************\n");
    printf("*\n\n\n\n");
}

// Q3
void f3()
{
    printf("\n****************************************************************************\n");
    printf("\nQ3. WAP to print {\"MySirG\"} on the screen [Remeber to print double quotes].\n\n");
    printf("\"MySirG\"\n");
    printf("\n");
    printf("**************************** END OF QUESTION 3rd ****************************\n");
    printf("\n\n\n\n");
}

// Q4
void f4()
{
    printf("\n****************************************************************************\n");
    printf("\nQ4. WAP to print {\"Teacher\'s Day\"} on the screen [Remeber to print double and single quotes].\n\n");
    printf("\"Teacher\'s Day\"\n");
    printf("\n");
    printf("**************************** END OF QUESTION 4th ****************************\n");
    printf("\n\n\n\n");
}

// Q5
void f5()
{
    printf("\n****************************************************************************\n");
    printf("\nQ5. Write a program to demonstrate the use of [slash n].\n\n");
    printf("Thiruvananthapuram\n\t'\n\t'\n\t'\n\t'\n\t'\n\t*\n\tHeydrabad\n");
    printf("\n");
    printf("**************************** END OF QUESTION 5th ****************************\n");
    printf("\n\n\n\n");
}

// Q6
void f6()
{
    printf("\n****************************************************************************\n");
    printf("\nQ6. Write a program to demonstrate the use of [slash r]\n\n.");
    printf("xyz");
    printf("\rQ6. XYZ\n");
    printf("\n");
    printf("**************************** END OF QUESTION 6th ****************************\n");
    printf("\n\n\n\n");
}

// Q7
void f7()
{
    printf("\n****************************************************************************\n");
    printf("\nQ7.  WAP to Calculate Sum of 2 integers.\n\n");
    int a = 13;
    int b = 17;
    int sum = a + b;

    printf("a = 13\n");
    printf("b = 17\n\n");
    printf("Sum => %d + %d\n", a, b);
    printf("    =>   %d ans.\n", sum);
    printf("\n");
    printf("**************************** END OF QUESTION 7th ****************************\n");
    printf("\n\n\n\n");
}

// Q8
void f8()
{
    printf("\n****************************************************************************\n");
    printf("\nQ8. WAP to find the Square of a number.\n\n");
    int a = 12;
    int square = a * a;

    printf("a = 12\n\n");
    printf("Square => %d * %d\n", a, a);
    printf("       =>   %d ans.\n", square);
    printf("\n");
    printf("**************************** END OF QUESTION 8th ****************************\n");
    printf("\n\n\n\n");
}

// Q9
void f9()
{
    printf("\n****************************************************************************\n");
    printf("\nQ9. WAP to Calculate area of a Rectangle.\n\n");
    float length = 18.5;
    float breadth = 6.3;
    float area = length * breadth;

    printf("length = 18.5 cm\n");
    printf("breadth = 6.3 cm\n\n");
    printf("Area of Rectangle  = %.2fcm * %.2fcm\n", length, breadth);
    printf("                   = %.2f cm^2 ans.\n", area);
    printf("\n");
    printf("**************************** END OF QUESTION 9th ****************************\n");
    printf("\n\n\n\n");
}

// Q10
void f10()
{
    printf("\n****************************************************************************\n");
    printf("\nQ10. WAP to Calculate area of a Circle.\n\n");
    float r = 12;
    float pi = 3.14;
    float Area = pi * r * r;

    printf("radius = 12 cm\n");
    printf("pi = 3.14\n\n");
    printf("Area of Circle  = %.2fcm * %.2fcm * %.2fcm\n", pi, r, r);
    printf("                = %.2fcm^2 ans.\n", Area);
    printf("\n");
    printf("**************************** END OF QUESTION 10th ****************************\n");
    printf("\n");
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
    f9();
    f10();
    return 0;
}