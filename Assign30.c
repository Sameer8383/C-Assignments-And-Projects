#include <stdio.h>

/*===========================================================
                ASSIGNMENT – 30 (ARRAYS)
===========================================================*/

/*-----------------------------------------------------------
    Q1 – Sort Array Elements
    (Normal Function Call & Function Pointer Call)
-----------------------------------------------------------*/

// Bubble Sort Function
void sortArray(int *ptr, int size)
{
    int temp;
    for (int round = 0; round < size - 1; round++)
    {
        for (int i = 0; i < size - round - 1; i++)
        {
            if (*(ptr + i) > *(ptr + i + 1))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + i + 1);
                *(ptr + i + 1) = temp;
            }
        }
    }
}

/*================== Q1 (Normal) ==================*/
void f1()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q1. Sort Array Elements  (Normal Function Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {10, 20, 36, 4, 15, 6, 17, 8, 9, 1};
    int *ptr = arr;

    printf("Array Before Sorting:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    sortArray(ptr, 10);

    printf("\n\nArray After Sorting (Ascending):\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\n\n-------------------- End of Q1 --------------------\n\n");
}

/*================== Q1.1 (Function Pointer) ==================*/
void f1_()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q1.1 Sort Array Elements  (Function Pointer Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int *ptr = arr;

    printf("Array Before Sorting:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    void (*fp)(int *, int) = sortArray;
    fp(ptr, 10);

    printf("\n\nArray After Sorting (Ascending):\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\n\n-------------------- End of Q1.1 --------------------\n\n");
}

/*-----------------------------------------------------------
    Q2 – Find Second Largest
-----------------------------------------------------------*/

int secondLargest(int *ptr, int size)
{
    sortArray(ptr, size);
    return *(ptr + size - 2);
}

/*================== Q2 (Normal) ==================*/
void f2()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q2. Find Second Largest Element (Normal Function Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int *ptr = arr;

    printf("Array Elements:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    int result = secondLargest(ptr, 10);

    printf("\n\nSecond Largest = %d\n", result);

    printf("\n-------------------- End of Q2 --------------------\n\n");
}

/*================== Q2.1 (Function Pointer) ==================*/
void f2_()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q2.1 Find Second Largest Element (Function Pointer Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {10, 6, 11, 15, 9, 3, 4, 5, 1, 2};
    int *ptr = arr;

    printf("Array Elements:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    int (*fp)(int *, int) = secondLargest;
    int result = fp(ptr, 10);

    printf("\n\nSecond Largest = %d\n", result);

    printf("\n-------------------- End of Q2.1 --------------------\n\n");
}

/*-----------------------------------------------------------
    Q3 – Find Second Smallest
-----------------------------------------------------------*/

int secondSmallest(int *ptr, int size)
{
    sortArray(ptr, size);
    return *(ptr + 1);
}

/*================== Q3 (Normal) ==================*/
void f3()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q3. Find Second Smallest Element (Normal Function Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 0, 9, 1};
    int *ptr = arr;

    printf("Array Elements:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    int result = secondSmallest(ptr, 10);

    printf("\n\nSecond Smallest = %d\n", result);

    printf("\n-------------------- End of Q3 --------------------\n\n");
}

/*================== Q3.1 (Function Pointer) ==================*/
void f3_()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q3.1 Find Second Smallest Element (Function Pointer Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int *ptr = arr;

    printf("Array Elements:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    int (*fp)(int *, int) = secondSmallest;
    int result = fp(ptr, 10);

    printf("\n\nSecond Smallest = %d\n", result);

    printf("\n-------------------- End of Q3.1 --------------------\n\n");
}

/*-----------------------------------------------------------
    Q4 – Convert Ascending → Descending
-----------------------------------------------------------*/

void swapArray(int *ptr, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + size - 1 - i);
        *(ptr + size - 1 - i) = temp;
    }
}

/*================== Q4 (Normal) ==================*/
void f4()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q4. Convert Array Ascending -> Descending (Normal Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {43, 12, 32, 61, 23, 98, 10, 2, 3, 4};
    int *ptr = arr;

    printf("Array Before Sorting:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    sortArray(ptr, 10);

    printf("\n\nArray in Ascending:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    swapArray(ptr, 10);

    printf("\n\nArray in Descending:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\n\n-------------------- End of Q4 --------------------\n\n");
}

/*================== Q4.1 (Function Pointer) ==================*/
void f4_()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q4.1 Convert Array Ascending -> Descending (Function Pointer)\n");
    printf("-----------------------------------------------------------\n\n");

    int arr[10] = {9, 11, 86, 45, 23, 67, 8, 90, 10, 13};
    int *ptr = arr;

    printf("Array Before Sorting:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    void (*fp1)(int *, int) = sortArray;
    void (*fp2)(int *, int) = swapArray;

    fp1(ptr, 10);

    printf("\n\nArray in Ascending:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    fp2(ptr, 10);

    printf("\n\nArray in Descending:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\n\n-------------------- End of Q4.1 --------------------\n\n");
}

/*-----------------------------------------------------------
    Q5 – Copy Array
-----------------------------------------------------------*/

void copyArray(int *p, int *q, int size)
{
    for (int i = 0; i < size; i++)
        *(q + i) = *(p + i);
}

/*================== Q5 (Normal) ==================*/
void f5()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q5. Copy Array (Normal Function Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int x[10] = {7, 3, 2, 4, 5, 6, 7, 8, 9, 10}, y[10];
    int *p = x, *q = y;

    printf("Original Array x:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", x[i]);

    copyArray(p, q, 10);

    printf("\n\nCopied Array y:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", y[i]);

    printf("\n\n-------------------- End of Q5 --------------------\n\n");
}

/*================== Q5.1 (Function Pointer) ==================*/
void f5_()
{
    printf("\n-----------------------------------------------------------\n");
    printf(" Q5.1 Copy Array (Function Pointer Call)\n");
    printf("-----------------------------------------------------------\n\n");

    int x[10] = {10, 73, 2, 44, 5, 66, 7, 88, 9, 100}, y[10];
    int *p = x, *q = y;

    printf("Original Array x:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", x[i]);

    void (*fp)(int *, int *, int) = copyArray;
    fp(p, q, 10);

    printf("\n\nCopied Array y:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", y[i]);

    printf("\n\n-------------------- End of Q5.1 --------------------\n\n");
}

/*================== MAIN ==================*/
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
