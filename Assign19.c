#include<stdio.h>

// Function declarations
int f1(int a, int b);
int f2(int a, int b);
int f3(int a, int b);
float f4(float a, float b);

// Q1 function
void _f1()
{
    printf("Q1. Write a program which takes the month of the number as an input and display number of days in that month.\n\n");
    printf("Solution :- \n\n");

    int month;

    printf("Enter month number: ");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days\n");
        break;

    case 2:
        printf("28 or 29 days\n");
        break;

    default:
        printf("Please enter valid month number\n");
    }
}

// Q2 function
void _f2()
{
    printf("Q2. Write a menu driven program for the Addition, Subtraction, Multiplication, Division and for Exit\n\n");
    printf("Solution :- \n\n");

    printf("====================================\n");
    printf("    #. Menu of the program .#\n");
    printf("    1. Press 1 for Addition\n");
    printf("    2. Press 2 for Subtraction\n");
    printf("    3. Press 3 for Multiplication\n");
    printf("    4. Press 4 for Division\n");
    printf("    5. Press 5 for Exit\n");
    printf("===================================\n\n");

    int choice, a, b;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4)
    {
        printf("\nProvide two numbers to perform the selected operation: ");
        scanf("%d %d",&a, &b);
    }

    switch(choice)
    {
    case 1:
        printf("\nSum of %d + %d = %d\n\n",a,b,f1(a,b));
        break;

    case 2:
        if(a>b)
            printf("\nSubtraction of %d - %d = %d\n\n",a,b,a-b);
        else
            printf("\nSubtraction of %d - %d = %d\n\n",b,a,b-a);
        break;

    case 3:
        printf("\nMultiplication of %d × %d = %d\n\n",a,b,a*b);
        break;

    case 4:
        if(a == 0 && b == 0)
            printf("\nDivision not possible (0/0 is undefined)\n\n");
        else if(b == 0)
            printf("\nDivision not possible (denominator is zero)\n\n");
        else
            printf("\nDivision of %d / %d = %.2f\n\n", a, b, (float)a / b);
        break;

    case 5:
        printf("\nExiting the program.\n\n");
        break;

    default:
        printf("\nInvalid choice!\n\n");
    }
}

// Q3 function
void _f3()
{
    printf("Q3. Write a program which takes the day number of a week and displays a unique greeting message for the day.\n\n");
    printf("Solution :- \n\n");

    int weekDay;

    printf("Enter week day number(1 - 7): ");
    scanf("%d",&weekDay);

    switch(weekDay)
    {
    case 1:
        printf("\n1st day Fresh start, new week! 🌞\n");
        break;
    case 2:
        printf("\n2nd day Keep going strong! 💪\n");
        break;
    case 3:
        printf("\n3rd day Halfway there! 🌿\n");
        break;
    case 4:
        printf("\n4th day Stay focused, almost Friday! ✨\n");
        break;
    case 5:
        printf("\n5th day Cheers to the weekend vibes! 🎉\n");
        break;
    case 6:
        printf("\n6th day Relax and recharge! 🌸\n");
        break;
    case 7:
        printf("\n7th day Peaceful Sunday blessings! 🙏\n");
        break;
    default:
        printf("\nPlease enter a valid day number\n");
    }
}

// Q4 function
void _f4()
{
    printf("Q4. Write a menu driven program to check whether a triangle is Isosceles, Right angled or Equilateral.\n\n");
    printf("Solution :- \n\n");

    printf("============================================\n");
    printf("   #. Menu of the program .#\n");
    printf("   1. Check for Isosceles Triangle\n");
    printf("   2. Check for Right angled Triangle\n");
    printf("   3. Check for Equilateral Triangle\n");
    printf("============================================\n");

    int choice, a, b, c;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 3) {
        printf("Enter value for sides a, b and c: ");
        scanf("%d %d %d", &a, &b, &c);
    }

    switch(choice)
    {
    case 1:
        if (a == b || b == c || a == c)
            printf("It is an Isosceles Triangle.\n");
        else
            printf("Not an Isosceles Triangle.\n");
        break;

    case 2:
        if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b))
            printf("It is a Right-angled Triangle.\n");
        else
            printf("Not a Right-angled Triangle.\n");
        break;

    case 3:
        if (a == b && b == c)
            printf("It is an Equilateral Triangle.\n");
        else
            printf("Not an Equilateral Triangle.\n");
        break;

    default:
        printf("Invalid choice!\n");
    }
}
void _f5()
{
    printf("Q5. Convert the following if-else-if construct into switch case: \n");
    printf("\nif(var == 1)\n");
    printf("\t(\"Good\")\n");
    printf("else if(var == 2)\n");
    printf("\t(\"better\")\n");
    printf("else if(var == 3)\n");
    printf("\t(\"best\")\n");
    printf("else\n");
    printf("\t(\"Invalid\")\n");
    printf("\nSolution:- \n\n");

    int choice;

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("good\n");
        break;
    case 2:
        printf("better\n");
        break;
    case 3:
        printf("best\n");
        break;
    default:
        printf("Invalid");
    }
}
// Main function
int main()
{
    printf("***************************************\n");
    printf("\t   Assignment :- 19\n");
    printf("\t switch case control\n");
    printf("***************************************\n\n");

    _f1();   // Run Q1
    printf("\n\n---------------------------------------\n\n");
    _f2();  // Run Q2
    printf("\n\n---------------------------------------\n\n");
    _f3();  // Run Q3
    printf("\n\n---------------------------------------\n\n");
    _f4();  // Run Q4
    printf("\n\n---------------------------------------\n\n");
    _f5();  // Run Q4
    return 0;
}

// Function definitions
int f1(int a, int b) {
    return a+b;
}
int f2(int a, int b) {
    return a-b;
}
int f3(int a, int b) {
    return a*b;
}
float f4(float a, float b) {
    return a/b;
}