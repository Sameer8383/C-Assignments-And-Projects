#include <stdio.h>

// ================================================================
// Assignment 32: Arrays and Functions (Normal & Pointer Function Calls)
// ================================================================

// -------------------- Q1: Swap two elements --------------------
int swapIndex(int *ptr, int index1, int index2)
{
  int temp;
  temp = *(ptr + index1);
  *(ptr + index1) = *(ptr + index2);
  *(ptr + index2) = temp;
  return temp;
}

void f1()
{
  printf("\n*===================== Using Normal Function Call =====================*\n");
  printf("Q1: Swap two elements of a given array with specified indices\n\n");

  int arr[10] = {1, 7, 4, 5, 6, 3, 2, 9, 8, 0};
  int *ptr = arr;
  int index1 = 3, index2 = 7;

  printf("Before Swapping: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  swapIndex(ptr, index1, index2);

  printf("\nAfter Swapping:  ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  printf("\n\n*----------------------------- END OF Q1 -----------------------------*\n\n\n");
}

void f1_()
{
  printf("\n*===================== Using Pointer Function Call ===================*\n");
  printf("Q1.1: Swap two elements using function pointer\n\n");

  int arr[10] = {1, 7, 4, 5, 6, 3, 2, 9, 8, 0};
  int *ptr = arr;
  int index1 = 2, index2 = 5;

  printf("Before Swapping: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  int (*fptr)(int *, int, int) = swapIndex;
  fptr(ptr, index1, index2);

  printf("\nAfter Swapping:  ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  printf("\n\n*---------------------------- END OF Q1.1 ----------------------------*\n\n\n");
}

// -------------------- Utility: Sort Array --------------------
int shortArray(int *ptr, int size)
{
  int temp;
  for (int round = 1; round < size; round++)
  {
    for (int i = 0; i < size - round; i++)
    {
      if (*(ptr + i) > *(ptr + i + 1))
      {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 1);
        *(ptr + i + 1) = temp;
      }
    }
  }
  return temp;
}

// -------------------- Q2: Count Duplicates --------------------
void countDuplicate(int *ptr, int size)
{
  printf("\nElements occurring 2 or more times:\n");
  printf("-------------------------------\n");
  printf("Element  Occurs\n");
  printf("-------  ------\n");

  for (int i = 0; i < size; i++)
  {
    int count = 0;
    for (int j = i + 1; j < size; j++)
    {
      if (*(ptr + i) == *(ptr + j))
        count++;
      else
        break;
    }
    if (count >= 1)
    {
      printf("%d\t  %d times\n", *(ptr + i), count + 1);
      i += count;
    }
  }
}

void f2()
{
  printf("\n*===================== Using Normal Function Call =====================*\n");
  printf("Q2: Count total duplicate elements in array\n\n");
  int arr[10] = {1, 3, 7, 8, 8, 3, 3, 8, 8, 1};
  int *ptr = arr;

  printf("Before Sorting: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  shortArray(ptr, 10);

  printf("\nAfter Sorting:  ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  countDuplicate(ptr, 10);

  printf("\n*----------------------------- END OF Q2 -----------------------------*\n\n\n");
}

void f2_()
{
  printf("\n*===================== Using Pointer Function Call ===================*\n");
  printf("Q2.1: Count duplicates using function pointers\n\n");

  int arr[10] = {1, 7, 2, 5, 6, 7, 2, 9, 2, 0};
  int *ptr = arr;

  printf("Before Sorting: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  int (*fptr1)(int *, int) = &shortArray;
  fptr1(ptr, 10);

  printf("\nAfter Sorting:  ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  void (*fptr2)(int *, int) = &countDuplicate;
  fptr2(ptr, 10);

  printf("\n*---------------------------- END OF Q2.1 ----------------------------*\n\n\n");
}

// -------------------- Q3: Print Unique Elements --------------------
void countUnique(int *ptr, int size)
{
  int counted = 0;
  for (int i = 0; i < size; i++)
  {
    int count = 0;
    for (int j = 0; j < size; j++)
    {
      if (i != j && *(ptr + i) == *(ptr + j))
      {
        count++;
        break;
      }
    }
    if (count == 0)
    {
      if (!counted)
        printf("\n");
      printf("%d is unique\n", *(ptr + i));
    }
    counted = 1;
  }
}

void f3()
{
  printf("\n*===================== Using Normal Function Call =====================*\n");
  printf("Q3: Print all unique elements in array\n\n");

  int arr[10] = {1, 7, 3, 5, 6, 3, 2, 2, 2, 1};
  int *ptr = arr;

  printf("Before Sorting: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  shortArray(ptr, 10);

  printf("\nAfter Sorting:  ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  printf("\n");
  countUnique(ptr, 10);

  printf("\n*----------------------------- END OF Q3 -----------------------------*\n\n\n");
}

void f3_()
{
  printf("\n*===================== Using Pointer Function Call ===================*\n");
  printf("Q3.1: Print unique elements using function pointers\n\n");

  int arr[10] = {1, 7, 3, 5, 6, 4, 2, 7, 2, 6};
  int *ptr = arr;

  printf("Before Sorting: ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  int (*fptr1)(int *, int) = &shortArray;
  fptr1(ptr, 10);

  printf("\nAfter Sorting:  ");
  for (int i = 0; i < 10; i++)
    printf("%d ", *(arr + i));

  void (*fptr2)(int *, int) = &countUnique;
  fptr2(ptr, 10);

  printf("\n*---------------------------- END OF Q3.1 ----------------------------*\n\n\n");
}

// -------------------- Q4: Merge Two Arrays --------------------
void mergeArray(int *ptr1, int *ptr2, int size1, int size2)
{
  int temp[size1 + size2];
  int i, j;

  for (i = 0; i < size1; i++)
    temp[i] = *(ptr1 + i);

  for (j = 0; j < size2; j++)
    temp[i + j] = *(ptr2 + j);

  printf("\nAfter Merging: ");
  for (i = 0; i < size1 + size2; i++)
    printf("%d ", temp[i]);

  shortArray(temp, size1 + size2);

  printf("\nAfter Sorting:  ");
  for (i = 0; i < size1 + size2; i++)
    printf("%d ", temp[i]);
}

void f4()
{
  printf("\n*===================== Using Normal Function Call =====================*\n");
  printf("Q4: Merge two arrays and sort them\n\n");

  int arr1[3] = {1, 7, 3};
  int arr2[3] = {11, 72, 33};

  mergeArray(arr1, arr2, 3, 3);

  printf("\n*----------------------------- END OF Q4 -----------------------------*\n\n\n");
}

void f4_()
{
  printf("\n*===================== Using Pointer Function Call ===================*\n");
  printf("Q4.1: Merge two arrays using function pointer\n\n");

  int arr1[3] = {1, 3, 6};
  int arr2[3] = {4, 2, 7};

  void (*fptr)(int *, int *, int, int) = &mergeArray;
  fptr(arr1, arr2, 3, 3);

  printf("\n*---------------------------- END OF Q4.1 ----------------------------*\n\n\n");
}

// -------------------- Q5: Count Frequency --------------------
void countFrequency(int *ptr, int size)
{
  printf("\nElement   Frequency\n");
  printf("-------   ---------\n");

  for (int i = 0; i < size;)
  {
    int count = 1;
    int j;
    for (j = i + 1; j < size && *(ptr + j) == *(ptr + i); j++)
      count++;

    printf("   %d\t     %d\n", *(ptr + i), count);
    i = j;
  }
}

void f5()
{
  printf("\n*===================== Using Normal Function Call =====================*\n");
  printf("Q5: Count frequency of each element\n\n");

  int arr[10] = {1, 7, 3, 5, 6, 3, 2, 2, 2, 1};

  shortArray(arr, 10);
  countFrequency(arr, 10);

  printf("\n*----------------------------- END OF Q5 -----------------------------*\n\n\n");
}

void f5_()
{
  printf("\n*===================== Using Pointer Function Call ===================*\n");
  printf("Q5.1: Count frequency using function pointers\n\n");

  int arr[10] = {1, 7, 3, 5, 6, 3, 2, 2, 2, 1};

  int (*fptr1)(int *, int) = &shortArray;
  fptr1(arr, 10);

  void (*fptr2)(int *, int) = &countFrequency;
  fptr2(arr, 10);

  printf("\n*---------------------------- END OF Q5.1 ----------------------------*\n\n\n");
}

// -------------------- Main Function --------------------
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
