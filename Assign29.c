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
    printf("\n=====================================================\n");
    printf("Q1. (Normal Function Call) - Sum of Array Elements\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int result = Sum(arr, 10);

    printf("\nSum of array elements:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" = %d\n\n\n", result);
}

void f1_()
{
    int arr[10];
    printf("\n=====================================================\n");
    printf("Q1.1 (Function Pointer) - Sum of Array Elements\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int (*fptr)(int *, int) = &Sum;
    int result = (*fptr)(arr, 10);

    printf("\nSum of array elements:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" = %d\n\n\n", result);
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
    printf("\n=====================================================\n");
    printf("Q2. (Normal Function Call) - Average of Array Elements\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    float result = avg(arr, 10);

    printf("\nAverage of array elements:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" / 10 = %.2f\n\n\n", result);
}

void f2_()
{
    int arr[10];
    printf("\n=====================================================\n");
    printf("Q2.1 (Function Pointer) - Average of Array Elements\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    float (*fptr)(int *, int) = &avg;
    float result = (*fptr)(arr, 10);

    printf("\nAverage of array elements:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(arr + i));
        if (i != 9)
            printf(" + ");
    }
    printf(" / 10 = %.2f\n\n\n", result);
}

//-------------------------------------------------
// Q3 - Sum of even and odd numbers
//-------------------------------------------------
void sumEvenOdd(int *arr, int size)
{
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
            evenSum += *(arr + i);
        else
            oddSum += *(arr + i);
    }

    printf("\nEven numbers:\n--> ");
    int first = 1;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            if (!first) printf(" + ");
            printf("%d", *(arr + i));
            first = 0;
        }
    }
    printf(" = %d\n", evenSum);

    printf("\nOdd numbers:\n--> ");
    first = 1;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 != 0)
        {
            if (!first) printf(" + ");
            printf("%d", *(arr + i));
            first = 0;
        }
    }
    printf(" = %d\n", oddSum);
}

void f3()
{
    int arr[10];
    printf("\n=====================================================\n");
    printf("Q3. (Normal Function Call) - Sum of Even & Odd Numbers\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    sumEvenOdd(arr, 10);

    printf("\n\n\n");
}

void f3_()
{
    int arr[10];
    printf("\n=====================================================\n");
    printf("Q3.1 (Function Pointer) - Sum of Even & Odd Numbers\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    void (*fptr)(int *, int) = &sumEvenOdd;
    (*fptr)(arr, 10);

    printf("\n\n\n");
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
    printf("\n=====================================================\n");
    printf("Q4. (Normal Function Call) - Greatest Number\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int result = greatest(arr, 10);

    printf("\nNumbers entered:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\nGreatest number = %d\n\n\n", result);
}

void f4_()
{
    int arr[10];
    printf("\n=====================================================\n");
    printf("Q4.1 (Function Pointer) - Greatest Number\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int (*fptr)(int *, int) = &greatest;
    int result = (*fptr)(arr, 10);

    printf("\nNumbers entered:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\nGreatest number = %d\n\n\n", result);
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
    printf("\n=====================================================\n");
    printf("Q5. (Normal Function Call) - Smallest Number\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int result = smallest(arr, 10);

    printf("\nNumbers entered:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\nSmallest number = %d\n\n\n", result);
}

void f5_()
{
    int arr[10];
    printf("\n=====================================================\n");
    printf("Q5.1 (Function Pointer) - Smallest Number\n");
    printf("=====================================================\n\n");
    printf("Solution:-\n");

    printf("\nEnter 10 numbers:\n--> ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (arr + i));
    }

    int (*fptr)(int *, int) = &smallest;
    int result = (*fptr)(arr, 10);

    printf("\nNumbers entered:\n--> ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\nSmallest number = %d\n\n\n", result);
}

//-------------------------------------------------
// MAIN FUNCTION
//-------------------------------------------------
int main()
{
    // f1();
    // f1_();
    // f2();
    // f2_();
    f3();
    f3_();
    // f4();
    // f4_();
    // f5();
    // f5_();

    return 0;
}
 