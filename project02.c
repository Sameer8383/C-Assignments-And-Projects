#include <stdio.h>
#include <string.h>
#include <math.h>

// FUNCTION DECLARATIONS
void menu();
void implement(int, int);
void halfPyramid(int);
void invertedHalfPyramid(int);
void fullPyramid(int);
void invertedFullPyramid(int);
void diamond(int);
void hollowPyramid(int);
void hollowDiamond(int);
void butterfly(int);
void sandglass(int);
void rightHalfPyramid(int);
void halfPyramidNumbers(int);
void invertedHalfPyramidNumbers(int);
void fullPyramidNumbers(int);
void floydsTriangle(int);
void pascalsTriangle(int);
void numberDiamond(int);
void palindromicNumberPyramid(int);
void repeatingNumberPyramid(int);
void continuousNumberPyramid(int);
void invertedNumberPyramid(int);

// MENU FUNCTION
void menu()
{
    int rows, choice;

    printf("\n");
    printf("===========================================\n");
    printf("      WELCOME TO STAR & NUMBER PATTERN MENU\n");
    printf("===========================================\n\n");

    printf("Enter Your Choice (1-20, 0 to exit): ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        printf("\nYou chose to exit the program.\n");
        printf("Hope you enjoyed using the Pattern Generator!\n");
        printf("Have a great day! Goodbye.\n");
        return;
    }

    if (choice >= 1 && choice <= 20)
    {
        printf("Enter the number of rows for the pattern: ");
        scanf("%d", &rows);
    }
    else
    {
        printf("\nOops! You entered an invalid choice.\n");
        printf("Please select a number between 0 and 20.\n");
        printf("Let's try again!\n\n");
        menu();
        return;
    }

    implement(choice, rows);
}

// IMPLEMENTATION FUNCTION
void implement(int choice, int n)
{
    switch (choice)
    {
    case 1:
        halfPyramid(n);
        break;
    case 2:
        invertedHalfPyramid(n);
        break;
    case 3:
        fullPyramid(n);
        break;
    case 4:
        invertedFullPyramid(n);
        break;
    case 5:
        diamond(n);
        break;
    case 6:
        hollowPyramid(n);
        break;
    case 7:
        hollowDiamond(n);
        break;
    case 8:
        butterfly(n);
        break;
    case 9:
        sandglass(n);
        break;
    case 10:
        rightHalfPyramid(n);
        break;
    case 11:
        halfPyramidNumbers(n);
        break;
    case 12:
        invertedHalfPyramidNumbers(n);
        break;
    case 13:
        fullPyramidNumbers(n);
        break;
    case 14:
        floydsTriangle(n);
        break;
    case 15:
        pascalsTriangle(n);
        break;
    case 16:
        numberDiamond(n);
        break;
    case 17:
        palindromicNumberPyramid(n);
        break;
    case 18:
        repeatingNumberPyramid(n);
        break;
    case 19:
        continuousNumberPyramid(n);
        break;
    case 20:
        invertedNumberPyramid(n);
        break;
    default:
        printf("\nSomething went wrong! Invalid choice.\n");
        printf("Let's go back and select a valid option.\n\n");
        menu();
        return;
    }

    char choice2[10];
    printf("\nDo you want to display another pattern? (yes/no): ");
    scanf("%s", choice2);

    if (strcmp(choice2, "yes") == 0 || strcmp(choice2, "Yes") == 0)
    {
        printf("\nAwesome! Let's create another beautiful pattern.\n");
        printf("Get ready to see more stars and numbers!\n\n");
        menu();
    }
    else if (strcmp(choice2, "no") == 0 || strcmp(choice2, "No") == 0)
    {
        printf("\nNo worries! You chose to stop.\n");
        printf("Hope you enjoyed creating patterns today.\n");
        printf("Come back anytime to explore more.\n");
    }
    else
    {
        printf("\nHmm... I didn't understand that.\n");
        printf("Please enter 'yes' or 'no'.\n");
        menu();
    }
}

// PATTERN FUNCTIONS (same as before, unchanged)
void halfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
void invertedHalfPyramid(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
void fullPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
void invertedFullPyramid(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
void diamond(int n)
{
    fullPyramid(n);
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
void hollowPyramid(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 1; i <= 2 * n - 1; i++)
        printf("*");
    printf("\n");
}
void hollowDiamond(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void butterfly(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
void sandglass(int n)
{
    invertedFullPyramid(n);
    fullPyramid(n - 1);
}
void rightHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
void halfPyramidNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}
void invertedHalfPyramidNumbers(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}
void fullPyramidNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d", k++);
        printf("\n");
    }
}
void floydsTriangle(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", k++);
        printf("\n");
    }
}
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int combination(int n, int r) { return factorial(n) / (factorial(r) * factorial(n - r)); }
void pascalsTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
}
void numberDiamond(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d", i);
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d", i);
        printf("\n");
    }
}
void palindromicNumberPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for (int j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}
void repeatingNumberPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
}
void continuousNumberPyramid(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", k++);
        printf("\n");
    }
}
void invertedNumberPyramid(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}

int main()
{
    menu();
    return 0;
}
