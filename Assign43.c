#include <stdio.h>
#include <string.h>

// Assignment 43.
// Pointers and Strings
// Q1. Write a function to swap strings of two char arrays.
void swapStrings(char* str1, char* str2)
{
    char temp[20];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
void f1()
{
    printf("\n******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q1. Write a function to swap strings of two char arrays.\n");
    printf("******************************************************************************\n\n");
    
    char str1[20] = "Hello";
    char str2[20] = "World";

    printf("Before swapping:\n\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    swapStrings(str1, str2);

    printf("\nAfter swapping:\n\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 1st.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
// Q2. Write a function to sort an array of int type values. [ void sort(int *ptr,int size) ]
void sort(int *ptr, int size)
{
    int round, i, temp;

    for (round = 1; round < size; round++)
        {
            for (i = 0; i < size-round; i++)
                {
                    if (*(ptr+i) > *(ptr+i+1))
                    {
                        temp = *(ptr+i);
                        *(ptr+i) = *(ptr+i+1);
                        *(ptr+i+1) = temp;
                    }
                }
        }
}
void f2()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q2. Write a function to sort an array of int type values. [ void sort(int *ptr,int size) ]\n");
    printf("******************************************************************************\n\n");

    int arr[] = {5, 3, 2, 4, 1};
    int size = 5;

    int *ptr = arr;

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));
    printf("\n");
    
    sort(ptr, size);

    printf("After sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    printf("\n******************************************************************************\n");
    printf("                        End of Program 2nd.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");   
}
// Q3. Write a function to merge two arrays of int type sorted in descending order.
void merge(int *arr1, int *arr2, int size1, int size2, int *arr3)
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < size1 && j < size2; k++)
    {
            if (arr1[i] < arr2[j])
                arr3[k] = arr1[i++];
            else
                arr3[k] = arr2[j++];
    }
    for (; i < size1; i++, k++)
        arr3[k] = arr1[i];
    
    for (; j < size2; j++, k++)
        arr3[k] = arr2[j];
}
void f3()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q3. Write a function to merge two arrays of int type sorted in descending order.\n");
    printf("******************************************************************************\n\n");

    int arr1[] = {10, 8, 6, 4, 2}, arr2[] = {9, 7, 5, 3, 1}, arr3[10];
    int *ptr1 = arr1, *ptr2 = arr2, *ptr3 = arr3;

    int size1 = 5;
    int size2 = 5;

    printf("Array 1:\n");
    for (int i = 0; i < size1; i++)
        printf("%d ", *(ptr1 + i));
    printf("\n");

    printf("Array 2:\n");
    for (int i = 0; i < size2; i++)
        printf("%d ", *(ptr2 + i));
    printf("\n");
    
    merge(ptr1, ptr2, size1, size2, ptr3);

    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d ", *(ptr3 + i));

    printf("\n******************************************************************************\n");
    printf("                        End of Program 3rd.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");   
} 
// Q4. Write a function to move first value of the array to the position where all smaller
int movePivot(int *arr, int size)
{
    int pivot = arr[0];
    int i = 1, j = size - 1, temp;

    while (i <= j)
    {
        while (arr[i] < pivot && i <= j)
            i++;
        while (arr[j] > pivot && i <= j)
            j--;

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    // Place pivot in correct position
    arr[0] = arr[j];
    arr[j] = pivot;

    return j; // position where pivot is placed
}

void f4()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q4. Write a function to move first value of the array to the position where all smaller\n");
    printf("    values will be in the left and greater values will be in the right.\n");
    printf("******************************************************************************\n\n");

    int arr[] = {30, 10, 50, 20, 40, 5};
    int size = 6;
    int *ptr = arr;

    printf("Before rearranging:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    int pos = movePivot(ptr, size);

    printf("\nAfter rearranging (pivot moved):\n");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));
    printf("\n\nPivot final position: %d\n", pos);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 4th.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
// Q5. There are five classes with different number of students in them. Five arrays
int highestMarks(int *marks, int no_of_students)
{
    int max = marks[0];
    for (int i = 1; i < no_of_students; i++)
    {
        if (marks[i] > max)
            max = marks[i];
    }
    return max;
}
int highestOverall(int **ptr, int no_of_classes, int no_of_students)
{
    int max = 0;
    for (int i = 0; i < no_of_classes; i++)
    {
        for (int j = 0; j < no_of_students; j++)
        {
            if (ptr[i][j] > max)
                max = ptr[i][j];
        }
    }
    return max;
}
void f5()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q5. There are five classes with different number of students in them. Five arrays\n");
    printf("    containing marks of students of each class. Write a function to receive an address\n");
    printf("    of an array of pointers to access marks of all students. The job of the function\n");
    printf("    is to find the highest marks of each class and among all classes.\n");
    printf("******************************************************************************\n\n");

    char *classes[] = {"Class 1", "Class 2", "Class 3", "Class 4", "Class 5"};
    int no_of_classes = 5;
    int no_of_students = 5;

    int marks[5][5] = {
        {10, 20, 30, 40, 50},
        {15, 25, 35, 45, 55},
        {1, 2, 3, 4, 5},
        {11, 22, 33, 44, 55},
        {12, 23, 34, 45, 56}
    };

    int *ptr[5] = {marks[0], marks[1], marks[2], marks[3], marks[4]};
    int **ptr2 = ptr;

    printf("Marks of students:\n\n");
    for (int i = 0; i < no_of_classes; i++)
    {
        printf("%s: ", classes[i]);
        for (int j = 0; j < no_of_students; j++)
        {
            printf("%d ", ptr2[i][j]);
        }
        printf("\n");
    }

    printf("\n---------------------------------------------\n");
    printf("Highest Marks of Each Class:\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < no_of_classes; i++)
    {
        int max_class = highestMarks(ptr2[i], no_of_students);
        printf("%s => %d\n", classes[i], max_class);
    }

    int max_all = highestOverall(ptr2, no_of_classes, no_of_students);
    printf("---------------------------------------------\n");
    printf("Highest Marks Among All Classes = %d\n", max_all);
    printf("---------------------------------------------\n");
}
int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    return 0;
}
