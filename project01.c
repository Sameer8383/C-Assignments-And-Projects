#include <stdio.h>
#include <string.h>
#include <math.h>
// Project 01.
// C Programming Calculator with Recursion and function calls
void menu();
void implement(int choice, int a, int b);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);
int mod(int a, int b);
int power(int a, int b);
int fact(int a);

void menu()
{
    int choice, a = 0, b = 0;

    printf("\n\n");
    printf("=============================================================\n");
    printf("WELCOME TO OUR FIRST PROJECT OF C PROGRAMMING\n");
    printf("=============================================================\n");
    printf("                  C PROGRAMMING CALCULATOR\n");
    printf("=============================================================\n\n");

    printf("+++++==========+++++++==========+++++==========+++++\n");
    printf("Select an Operation to Perform:           \n");
    printf("+++++==========+++++++==========+++++==========+++++\n");
    printf("[1] For Addition                 Press [1]\n");
    printf("[2] For Subtraction              Press [2]\n");
    printf("[3] For Multiplication           Press [3]\n");
    printf("[4] For Division                 Press [4]\n");
    printf("[5] For Modulus                  Press [5]\n");
    printf("[6] For Power (Recursion)        Press [6]\n");
    printf("[7] For Factorial (Recursion)    Press [7]\n");
    printf("[8] For Exit                     Press [8]\n");
    printf("+++++==========+++++++==========+++++==========+++++\n");

    printf("----------------------------------------------------\n");
    printf("NOTES TO REMEMBER\n");
    printf("----------------------------------------------------\n");
    printf("For Addition, Subtraction, Multiplication: Enter A and B\n");
    printf("For Division or Modulus: Second number must be non-zero\n");
    printf("For Power: Enter base (A) and exponent (B)\n");
    printf("For Factorial: Enter a positive integer (A)\n");
    printf("For Exit: Press [8]\n");
    printf("----------------------------------------------------\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 6)
    {
        printf("Enter Two Numbers (A and B): ");
        scanf("%d %d", &a, &b);
    }
    else if (choice == 7)
    {
        printf("Enter a Number (A): ");
        scanf("%d", &a);
    }

    static int round = 1;
    implement(choice, a, b);

    char str[10];
    printf("\nEnter Your Opinion for Round %d (Yes/No): ", round);
    round++;
    scanf(" %s", str);

    if (strcmp(str, "Yes") == 0 || strcmp(str, "yes") == 0)
    {
        printf("\nThank you for choosing the calculator again!\n");
        printf("Welcome back! Get ready for more amazing calculations!\n");
        printf("Your opinion makes this program more awesome!\n");
        printf("-------------------------------------------------------------\n\n");
        menu();
    }
    else if (strcmp(str, "No") == 0 || strcmp(str, "no") == 0)
    {
        printf("\nYou are amazing for trying this calculator!\n");
        printf("Keep coding and creating wonderful things!\n");
        printf("Remember: Every mistake is a step to mastery!!\n");
        printf("==========================================\n");
    }
}

void implement(int choice, int a, int b)
{
    switch (choice)
    {
    case 1:
        printf("\nResult: %d + %d = %d\n", a, b, add(a, b));
        break;

    case 2:
        printf("\nResult: %d - %d = %d\n", a, b, sub(a, b));
        break;

    case 3:
        printf("\nResult: %d * %d = %d\n", a, b, mul(a, b));
        break;

    case 4:
        if (b != 0)
            printf("\nResult: %d / %d = %.2f\n", a, b, divide(a, b));
        else
            printf("\nError: Division by Zero is not allowed!\n");
        break;

    case 5:
        if (b != 0)
            printf("\nResult: %d %% %d = %d\n", a, b, mod(a, b));
        else
            printf("\nError: Modulus by Zero is not allowed!\n");
        break;

    case 6:
        printf("\nResult: %d ^ %d = %d\n", a, b, power(a, b));
        break;

    case 7:
        if (a < 0)
            printf("\nError: Factorial of Negative Number is not Possible!\n");
        else
            printf("\nResult: %d! = %d\n", a, fact(a));
        break;

    case 8:
        printf("\nThank you for using the Calculator!\n");
        printf("You did a fantastic job exploring calculations!\n");
        printf("Keep learning and coding!\n");
        printf("=============================================\n\n");
        return;

    default:
        printf("\nWhoops! That's not a valid option.\n");
        printf("Try again and choose a number from 1 to 8.\n");
        printf("You got this! Keep going!\n");
    }

    printf("\n-------------------------------------------------------------\n");
}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }
int mod(int a, int b) { return a % b; }
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    menu();
    printf("\n");
    return 0;
}
