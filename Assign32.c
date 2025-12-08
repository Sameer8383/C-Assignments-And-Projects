#include <stdio.h>

// Assignment 32: Arrays and Functions (Using Normal & Pointer Function Call)

// =========================== Q1 ===========================
// Swap two elements of given array with specified indices
int swapIndex(int *ptr, int index1, int index2) {
    int temp;
    temp = *(ptr + index1);
    *(ptr + index1) = *(ptr + index2);
    *(ptr + index2) = temp;
    return temp;
}

void f1() {
    printf("===================================================================================\n");
    printf(" Q1. Swap two elements of given array with specified indices (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 7, 4, 5, 6, 3, 2, 9, 8, 0}, size = 10;
    int *ptr = arr;
    int index1 = 3, index2 = 7;

    printf("Before Swapping: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
    
    swapIndex(ptr, index1, index2);

    printf("\nAfter Swapping:  ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n===================================================================================\n");
    printf("                              END OF PROGRAM 1                                        \n");
    printf("===================================================================================\n\n\n");
}

void f1_() {
    printf("===================================================================================\n");
    printf(" Q1.1 Swap two elements of given array with specified indices (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 7, 4, 5, 6, 3, 2, 9, 8, 0}, size = 10;
    int *ptr = arr;
    int index1 = 2, index2 = 5;

    printf("Before Swapping: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    int (*fptr)(int *, int, int) = swapIndex;
    fptr(ptr, index1, index2);

    printf("\nAfter Swapping:  ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n===================================================================================\n");
    printf("                              END OF PROGRAM 1.1                                      \n");
    printf("===================================================================================\n\n\n");
}

// =========================== Q2 ===========================
// Count total duplicate elements in array
int shortArray(int *ptr, int size) {
    int temp, round, i;
    for (round = 1; round < size; round++) {
        for (i = 0; i < size - round; i++) {
            if (*(ptr + i) > *(ptr + i + 1)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + i + 1);
                *(ptr + i + 1) = temp;
            }
        }
    }
    return temp;
}

void countDuplicate(int *ptr, int size) {
    int count;
    printf("-----------------------------------------------------------\n");
    printf("Elements that occur 2 or more times in an array are: \n");
    printf("-----------------------------------------------------------\n");
    printf("Element   Occurs\n");
    printf("-------   ------\n");

    for (int i = 0; i < size; i++) {
        count = 0;
        for (int j = i + 1; j < size; j++) {
            if (*(ptr + i) == *(ptr + j))
                count++;
            else
                break;
        }
        if (count >= 1) {
            printf("%-8d %d times\n", *(ptr + i), count + 1);
            i = i + count;
        }
    }
}

void f2() {
    printf("===================================================================================\n");
    printf(" Q2. Count total duplicate elements in array (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 3, 7, 8, 8, 3, 3, 8, 8, 1}, size = 10;
    int *ptr = arr;

    printf("Before Sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    shortArray(ptr, size);

    printf("\nAfter Sorting:  ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");
    countDuplicate(ptr, size);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 2                                        \n");
    printf("===================================================================================\n\n\n");
}

void f2_() {
    printf("===================================================================================\n");
    printf(" Q2.1 Count total duplicate elements in array (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 7, 2, 5, 6, 7, 2, 9, 2, 0}, size = 10;
    int *ptr = arr;

    printf("Before Sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    int (*fptr1)(int *, int) = &shortArray;
    fptr1(ptr, size);

    printf("\nAfter Sorting:  ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");

    void (*fptr2)(int *, int) = &countDuplicate;
    fptr2(ptr, size);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 2.1                                      \n");
    printf("===================================================================================\n\n\n");
}

// =========================== Q3 ===========================
// Print all unique elements in array
void countUnique(int *ptr, int size) {
    int count, i;
    for (i = 0; i < size; i++) {
        count = 0;
        for (int j = 0; j < size; j++) {
            if (i != j && *(ptr + i) == *(ptr + j)) {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("%d is a unique element\n", *(ptr + i));
    }
}

void f3() {
    printf("===================================================================================\n");
    printf(" Q3. Print all unique elements in an array (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 7, 3, 5, 6, 3, 2, 2, 2, 1}, size = 10;
    int *ptr = arr;

    printf("Before Sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");
    shortArray(ptr, size);

    printf("After Sorting:  ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");
    countUnique(ptr, size);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 3                                        \n");
    printf("===================================================================================\n\n\n");
}

void f3_() {
    printf("===================================================================================\n");
    printf(" Q3.1 Print all unique elements in an array (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 7, 3, 5, 6, 4, 2, 7, 2, 6}, size = 10;
    int *ptr = arr;

    printf("Before Sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");
    int (*fptr1)(int *, int) = &shortArray;
    fptr1(ptr, size);

    printf("After Sorting:  ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");
    void (*fptr2)(int *, int) = &countUnique;
    fptr2(ptr, size);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 3.1                                      \n");
    printf("===================================================================================\n\n\n");
}

// =========================== Q4 ===========================
// Merge two arrays and sort
void mergeArray(int *ptr1, int *ptr2, int size1, int size2) {
    int temp[size1 + size2], i, j;

    for (i = 0; i < size1; i++)
        temp[i] = *(ptr1 + i);

    for (j = 0; j < size2; j++)
        temp[i + j] = *(ptr2 + j);

    printf("After Merging: ");
    for (i = 0; i < size1 + size2; i++)
        printf("%d ", temp[i]);

    shortArray(temp, size1 + size2);

    printf("\nAfter Sorting: ");
    for (i = 0; i < size1 + size2; i++)
        printf("%d ", temp[i]);
}

void f4() {
    printf("===================================================================================\n");
    printf(" Q4. Merge two arrays of same size and sort (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    int arr1[3] = {1, 7, 3}, arr2[3] = {11, 72, 33};
    int *ptr1 = arr1, *ptr2 = arr2;

    printf("Array 1: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", *(arr1 + i));

    printf("\nArray 2: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", *(arr2 + i));

    mergeArray(ptr1, ptr2, 3, 3);

    printf("\n\n===================================================================================\n");
    printf("                              END OF PROGRAM 4                                        \n");
    printf("===================================================================================\n\n\n");
}

void f4_() {
    printf("===================================================================================\n");
    printf(" Q4.1 Merge two arrays of same size and sort (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    int arr1[3] = {1, 3, 6}, arr2[3] = {4, 2, 7};
    int *ptr1 = arr1, *ptr2 = arr2;

    printf("Array 1: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", *(arr1 + i));

    printf("\nArray 2: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", *(arr2 + i));

    void (*fptr)(int *, int *, int, int) = &mergeArray;
    fptr(ptr1, ptr2, 3, 3);

    printf("\n\n===================================================================================\n");
    printf("                              END OF PROGRAM 4.1                                      \n");
    printf("===================================================================================\n\n\n");
}

// =========================== Q5 ===========================
// Count frequency of each element
void countFrequency(int *ptr, int size) {
    int i, j, count;

    printf("Element   Frequency\n");
    printf("-------   ---------\n");

    for (i = 0; i < size;) {
        count = 1;
        for (j = i + 1; j < size && *(ptr + j) == *(ptr + i); j++)
            count++;

        printf("  %-7d %d\n", *(ptr + i), count);

        i = j;
    }
}

void f5() {
    printf("===================================================================================\n");
    printf(" Q5. Count frequency of each element (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 7, 3, 5, 6, 3, 2, 2, 2, 1};
    int *ptr = arr;

    printf("Original Array: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");

    shortArray(ptr, 10);

    printf("After Sorting:  ");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");
    countFrequency(ptr, 10);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 5                                        \n");
    printf("===================================================================================\n\n\n");
}

void f5_() {
    printf("===================================================================================\n");
    printf(" Q5.1 Count frequency of each element (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    int arr[10] = {1, 7, 3, 5, 6, 3, 2, 2, 2, 1};
    int *ptr = arr;

    printf("Original Array: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");

    int (*fptr1)(int *, int) = &shortArray;
    fptr1(ptr, 10);

    printf("After Sorting:  ");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(arr + i));

    printf("\n\n");

    void (*fptr2)(int *, int) = &countFrequency;
    fptr2(ptr, 10);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 5.1                                      \n");
    printf("===================================================================================\n\n\n");
}

// =========================== MAIN ===========================
int main() {
    f1(); f1_();
    f2(); f2_();
    f3(); f3_();
    f4(); f4_();
    f5(); f5_();

    return 0;
}
