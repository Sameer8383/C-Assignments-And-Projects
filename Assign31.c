#include <stdio.h>

/* ===========================================================
                Assignment :- 31 (Arrays & Functions)
   =========================================================== */

//***************************************************************************************
// Q1 - Find the greatest number (Normal & Function Pointer Call)
//***************************************************************************************

int greatest(int *ptr, int size) // TSRS
{
    int max = *ptr;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }
    return max;
}

//------------------------------ Q1 Normal Call ------------------------------//

void f1()
{
    printf("\n\n===================================================================================\n");
    printf(" Q1. Write a function (TSRS) to find the greatest number from the given array of\n");
    printf(" any size using (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {10, 20, 36, 4, 15, 6, 17, 8, 9, 1}, size = 10;
    int *ptr = arr;

    printf("Before function call:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));

    printf("\n\n");

    int max = greatest(ptr, size);
    printf("Greatest Number = %d\n", max);

    printf("\n");
    printf("=============================== End of Q1 ========================================\n");
    printf("\n\n\n");
}

//---------------------------- Q1.1 Function Pointer Call ----------------------------//

void f1_()
{
    printf("===================================================================================\n");
    printf(" Q1.1 Write a function (TSRS) to find the greatest number from the given array of\n");
    printf(" any size using (Function Pointer Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1}, size = 10;
    int *ptr = arr;

    printf("Before function call:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));

    printf("\n\n");

    int (*fptr)(int *, int) = &greatest;
    int max = fptr(ptr, size);
    printf("Greatest Number = %d\n", max);

    printf("\n");
    printf("============================= End of Q1.1 ========================================\n");
    printf("\n\n\n");
}

//***************************************************************************************
// Q2 - Smallest number (Normal & Function Pointer Call)
//***************************************************************************************

int smallest(int *ptr, int size) // TSRS
{
    int min = *ptr;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }
    return min;
}

//--------------------------------- Q2 Normal Call ---------------------------------//

void f2()
{
    printf("===================================================================================\n");
    printf(" Q2. Write a function (TSRS) to find the smallest number from the given array of\n");
    printf(" any size using (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {10, 20, 36, 4, 15, 6, 17, 8, 9, 1}, size = 10;
    int *ptr = arr;

    printf("Before function call:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));

    printf("\n\n");

    int min = smallest(ptr, size);
    printf("Smallest Number = %d\n", min);

    printf("\n");
    printf("=============================== End of Q2 ========================================\n");
    printf("\n\n\n");
}

//---------------------------- Q2.1 Function Pointer Call ----------------------------//

void f2_()
{
    printf("===================================================================================\n");
    printf(" Q2.1 Write a function (TSRS) to find the smallest number from the given array of\n");
    printf(" any size using (Function Pointer Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1}, size = 10;
    int *ptr = arr;

    printf("Before function call:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));

    printf("\n\n");

    int (*fptr)(int *, int) = &smallest;
    int min = fptr(ptr, size);
    printf("Smallest Number = %d\n", min);

    printf("\n");
    printf("============================= End of Q2.1 ========================================\n");
    printf("\n\n\n");
}

//***************************************************************************************
// Q3 - Sort Array using Bubble Sort (TSRN)
//***************************************************************************************

void sortArrayTSRN(int *arr, int size)
{
    int temp;
    for (int round = 0; round < size - 1; round++)
    {
        for (int i = 0; i < size - round - 1; i++)
        {
            if (*(arr + i) > *(arr + i + 1))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
            }
        }
    }
}

//-------------------------------- Q3 Normal Call --------------------------------//

void f3()
{
    printf("===================================================================================\n");
    printf(" Q3. Write a function (TSRN) to sort the array using Bubble Sort (Normal Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {10, 20, 36, 4, 15, 6, 17, 8, 9, 1}, size = 10;

    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    sortArrayTSRN(arr, size);

    printf("Array after sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");
    printf("=============================== End of Q3 ========================================\n");
    printf("\n\n\n");
}

//----------------------------- Q3.1 Function Pointer Call ----------------------------//

void f3_()
{
    printf("===================================================================================\n");
    printf(" Q3.1 Write a function (TSRN) to sort the array using Bubble Sort (Function Pointer)\n");
    printf("===================================================================================\n");

    int arr[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1}, size = 10;

    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    void (*fptr)(int *, int) = &sortArrayTSRN;
    fptr(arr, size);

    printf("Array after sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");
    printf("============================= End of Q3.1 ========================================\n");
    printf("\n\n\n");
}

//***************************************************************************************
// Q4 - Rotate Array Left/Right
//***************************************************************************************

void rotate(int a[], int size, int n, int d)
{
    int i, temp;

    if (d < 0) // LEFT Rotation
    {
        while (n--)
        {
            temp = a[0];
            for (i = 0; i < size - 1; i++)
                a[i] = a[i + 1];
            a[size - 1] = temp;
        }
    }
    else // RIGHT Rotation
    {
        while (n--)
        {
            temp = a[size - 1];
            for (i = size - 1; i >= 1; i--)
                a[i] = a[i - 1];
            a[0] = temp;
        }
    }
}

//-------------------------------- Q4 Normal Call --------------------------------//

void f4()
{
    printf("===================================================================================\n");
    printf(" Q4. Write a function to rotate array by n positions in d direction (Normal Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {32, 29, 40, 12, 70}, size = 5, n = 2, d = -1;

    printf("Array before rotation:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    rotate(arr, size, n, d);

    printf("Array after rotation:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");
    printf("=============================== End of Q4 ========================================\n");
    printf("\n\n\n");
}

//---------------------------- Q4.1 Function Pointer Call ----------------------------//

void f4_()
{
    printf("===================================================================================\n");
    printf(" Q4.1 Write a function to rotate array by n positions (Function Pointer Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {32, 29, 40, 12, 70}, size = 5, n = 2, d = -1;

    printf("Array before rotation:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    void (*fptr)(int *, int, int, int) = rotate;
    fptr(arr, size, n, d);

    printf("Array after rotation:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");
    printf("============================= End of Q4.1 ========================================\n");
    printf("\n\n\n");
}

//***************************************************************************************
// Q5 - First Occurrence of Adjacent Duplicate
//***************************************************************************************

int firstOccurrence(int *ptr, int size)
{
    for (int i = 0; i < size - 1; i++)
        if (*(ptr + i) == *(ptr + i + 1))
            return *(ptr + i);
    return -1;
}

//-------------------------------- Q5 Normal Call --------------------------------//

void f5()
{
    printf("===================================================================================\n");
    printf(" Q5. Write a function to find first occurrence of adjacent duplicate value (Normal)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 3, 3, 4, 5, 6, 7, 8, 9, 9}, size = 10;

    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    int occ = firstOccurrence(arr, size);

    if (occ != -1)
        printf("First adjacent duplicate value = %d\n", occ);
    else
        printf("No adjacent duplicate found.\n");

    printf("\n");
    printf("=============================== End of Q5 ========================================\n");
    printf("\n\n\n");
}

//----------------------------- Q5.1 Function Pointer Call ----------------------------//

void f5_()
{
    printf("===================================================================================\n");
    printf(" Q5.1 Write a function to find first adjacent duplicate value (Function Pointer)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 2, 2, 4, 5, 6, 7, 8, 1, 1}, size = 10;

    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    int (*fptr)(int *, int) = firstOccurrence;
    int occ = fptr(arr, size);

    if (occ != -1)
        printf("First adjacent duplicate value = %d\n", occ);
    else
        printf("No adjacent duplicate found.\n");

    printf("\n");
    printf("============================= End of Q5.1 ========================================\n");
    printf("\n\n\n");
}

//***************************************************************************************
// MAIN
//***************************************************************************************

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
