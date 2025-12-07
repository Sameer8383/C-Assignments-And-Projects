#include <stdio.h>

/* Assignment:- 29
Arrays */

//-------------------------------------------------
// Q1 - Sum of numbers in array
//-------------------------------------------------
int Sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i); // pointer use
    }
    return sum;
}

void f1()
{
    int arr[10];
    printf("\nQ1. (Normal Function Call) - Sum of array elements\n\n");
    printf("Solution:- \n");
    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int result = Sum(arr, 10);

    printf("Sum of array elements = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" = %d\n", result);

    printf("\n\n\n\n");
}

void f1_()
{
    int arr[10];
    printf("Q1.1 (Function Pointer) - Sum of array elements\n\n");
    printf("Solution:- \n");
    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int (*fptr)(int *, int) = &Sum;
    int result = (*fptr)(arr, 10);

    printf("Sum of array elements = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" = %d\n", result);

    printf("\n\n\n\n");
}

//-------------------------------------------------
// Q2 - Average
//-------------------------------------------------
float avg(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return (float)sum / size;
}

void f2()
{
    int arr[10];
    printf("Q2. (Normal Function Call) - Average of array elements\n\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    float result = avg(arr, 10);

    printf("Average of array elements = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" / 10 = %.2f\n", result);

    printf("\n\n\n\n");
}

void f2_()
{
    int arr[10];
    printf("Q2.1 (Function Pointer) - Average of array elements\n\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    float (*fptr)(int *, int) = &avg;
    float result = (*fptr)(arr, 10);

    printf("Average of array elements = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" / 10 = %.2f\n", result);

    printf("\n\n\n\n");
}

//-------------------------------------------------
// Q3 - Sum of even and odd numbers
//-------------------------------------------------
void sumEvenOdd(int *arr, int size)
{
    int evenSum = 0, oddSum = 0;

    // calculate sums
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
            evenSum += *(arr + i);
        else
            oddSum += *(arr + i);
    }

    // print even numbers
    printf("Even numbers: ");
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            printf("%d", *(arr + i));
            if (i != size - 1)
                printf(" + ");
        }
    }
    printf(" = %d\n", evenSum);

    // print odd numbers
    printf("Odd numbers: ");
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 != 0)
        {
            printf("%d", *(arr + i));
            if (i != size - 1)
                printf(" + ");
        }
    }
    printf(" = %d\n", oddSum);
}

void f3()
{
    int arr[10];
    printf("Q3. (Normal Function Call) - Sum of even and odd numbers\n\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    sumEvenOdd(arr, 10);
    printf("\n\n\n\n");
}

void f3_()
{
    int arr[10];
    printf("Q3.1 (Function Pointer) - Sum of even and odd numbers\n\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    void (*fptr)(int *, int) = &sumEvenOdd;
    (*fptr)(arr, 10);
    printf("\n\n\n\n");
}

//-------------------------------------------------
// Q4 - Greatest number
//-------------------------------------------------
int greatest(int *arr, int size)
{
    int max = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}

void f4()
{
    int arr[10];
    printf("Q4. (Normal Function Call) - Greatest number\n\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int result = greatest(arr, 10);

    printf("In all 10 numbers ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("the greatest is %d\n", result);

    printf("\n\n\n\n");
}

void f4_()
{
    int arr[10];
    printf("Q4.1 (Function Pointer) - Greatest number\n\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int (*fptr)(int *, int) = &greatest;
    int result = (*fptr)(arr, 10);

    printf("In all 10 numbers ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("the greatest is %d\n", result);

    printf("\n\n\n\n");
}

//-------------------------------------------------
// Q5 - Smallest number
//-------------------------------------------------
int smallest(int *arr, int size)
{
    int min = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) < min)
            min = *(arr + i);
    }
    return min;
}

void f5()
{
    int arr[10];
    printf("Q5. (Normal Function Call) - Smallest number\n\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int result = smallest(arr, 10);

    printf("In all 10 numbers ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("the smallest is %d\n", result);

    printf("\n\n\n\n");
}

void f5_()
{
    int arr[10];
    printf("Q5.1 (Function Pointer) - Smallest number\n");
    printf("Solution:- \n");

    printf("\nEnter 10 numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int (*fptr)(int *, int) = &smallest;
    int result = (*fptr)(arr, 10);

    printf("In all 10 numbers ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("the smallest is %d\n", result);

    printf("\n\n\n\n");
}

//-------------------------------------------------
// MAIN FUNCTION
//-------------------------------------------------
int main()
{
    f1();
    f1_();
    f2();
    f2_();
    f3();
    f3_();
    f4();
    f4_();
    f5();
    f5_();

    return 0;
}