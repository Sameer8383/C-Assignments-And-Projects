#include <stdio.h>
#include <string.h>
// ========================= Assignment 33 =========================
// Multi-Dimensional Arrays (3x3 Matrices)
// Includes: Normal Function Call & Pointer Function Call
// Q1: Matrix Addition
// Q2: Matrix Multiplication
// Q3: Matrix Transpose
// =================================================================

// ========================= Q1: Add Matrices =========================
// Normal Function
void addMatrix(int a[3][3], int b[3][3], int c[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
}

// Display 3x3 Matrix
void displayMatrix(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

void f1()
{
    printf("==============================================================\n");
    printf(" Q1: Matrix Addition (Normal Function Call)\n");
    printf("==============================================================\n\n");

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];

    printf("Matrix A:\n");
    displayMatrix(a);
    printf("\nMatrix B:\n");
    displayMatrix(b);

    addMatrix(a, b, c);

    printf("\nSum of Matrix A and B:\n");
    displayMatrix(c);

    printf("\n==================== END OF PROGRAM 1 ====================\n\n\n");
}

// Pointer Function Call
void f1_()
{
    printf("==============================================================\n");
    printf(" Q1.1: Matrix Addition (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];

    void (*ptr_addMatrix)(int[3][3], int[3][3], int[3][3]) = addMatrix;
    void (*ptr_displayMatrix)(int[3][3]) = displayMatrix;

    printf("Matrix A:\n");
    ptr_displayMatrix(a);
    printf("\nMatrix B:\n");
    ptr_displayMatrix(b);

    ptr_addMatrix(a, b, c);

    printf("\nSum of Matrix A and B:\n");
    ptr_displayMatrix(c);

    printf("\n==================== END OF PROGRAM 1.1 ====================\n\n\n");
}

// ========================= Q2: Multiply Matrices =========================
void multiplyMatrix(int *arr, int *arr1, int *arr2)
{
    int i, j, k, sum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
                sum += *(arr + i * 3 + k) * *(arr1 + k * 3 + j); // multiply values
            *(arr2 + i * 3 + j) = sum;
        }
    }
}

void displayMultiplicationMatrix(int *arr2)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", *(arr2 + i * 3 + j));
        printf("\n");
    }
}

void f2()
{
    printf("==============================================================\n");
    printf(" Q2: Matrix Multiplication (Normal Function Call)\n");
    printf("==============================================================\n\n");

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];

    int *p = &a[0][0], *q = &b[0][0], *r = &c[0][0];

    printf("Matrix A:\n");
    displayMultiplicationMatrix(p);
    printf("\nMatrix B:\n");
    displayMultiplicationMatrix(q);

    multiplyMatrix(p, q, r);

    printf("\nProduct of Matrix A and B:\n");
    displayMultiplicationMatrix(r);

    printf("\n==================== END OF PROGRAM 2 ====================\n\n\n");
}

// Pointer Function Call
void f2_()
{
    printf("==============================================================\n");
    printf(" Q2.1: Matrix Multiplication (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];

    int *p = &a[0][0], *q = &b[0][0], *r = &c[0][0];

    void (*fptr_multiplyMatrix)(int *, int *, int *) = multiplyMatrix;
    void (*fptr_displayMultiplicationMatrix)(int *) = displayMultiplicationMatrix;

    printf("Matrix A:\n");
    fptr_displayMultiplicationMatrix(p);
    printf("\nMatrix B:\n");
    fptr_displayMultiplicationMatrix(q);

    fptr_multiplyMatrix(p, q, r);

    printf("\nProduct of Matrix A and B:\n");
    fptr_displayMultiplicationMatrix(r);

    printf("\n==================== END OF PROGRAM 2.1 ====================\n\n\n");
}

// ========================= Q3: Transpose of Matrix =========================
void transposeMatrix(int *arr, int *arr1)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            *(arr1 + j * 3 + i) = *(arr + i * 3 + j);
}

void displayTransposeMatrix(int *arr1)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", *(arr1 + i * 3 + j));
        printf("\n");
    }
}

// ========================= Q3: Transpose of Matrix =========================
// Normal Function Call with optional user input
void f3() {
    printf("==============================================================\n");
    printf(" Q3: Transpose of a Matrix (Normal Function Call)\n");
    printf("==============================================================\n\n");

    int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; // default matrix
    int b[3][3];
    int *p = &a[0][0], *q = &b[0][0];
    char choice[4];

    printf("Do you want to enter your own matrix? (Yes/No): ");
    scanf("%3s", choice);

    if (strcmp(choice, "Yes") == 0 || strcmp(choice, "yes") == 0) {
        printf("\nEnter elements of Matrix A (3x3):\n");
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                scanf("%d", (p + i * 3 + j));
    }

    printf("\nMatrix A Before Transpose:\n");
    displayTransposeMatrix(p);

    transposeMatrix(p, q);

    printf("\nMatrix A After Transpose:\n");
    displayTransposeMatrix(q);

    printf("\n==================== END OF PROGRAM 3 ====================\n\n\n");
}

void f3_() {
    printf("==============================================================\n");
    printf(" Q3.1: Transpose of a Matrix (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; // default matrix
    int b[3][3];
    int *p = &a[0][0], *q = &b[0][0];
    char choice[4];

    printf("Do you want to enter your own matrix? (Yes/No): ");
    scanf("%3s", choice);

    if (strcmp(choice, "Yes") == 0 || strcmp(choice, "yes") == 0) {
        printf("\nEnter elements of Matrix A (3x3):\n");
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                scanf("%d", (p + i * 3 + j));
    }

    void (*fptr_transposeMatrix)(int *, int *) = transposeMatrix;
    void (*fptr_displayTransposeMatrix)(int *) = displayTransposeMatrix;

    printf("\nMatrix A Before Transpose:\n");
    fptr_displayTransposeMatrix(p);

    fptr_transposeMatrix(p, q);

    printf("\nMatrix A After Transpose:\n");
    fptr_displayTransposeMatrix(q);

    printf("\n==================== END OF PROGRAM 3.1 ====================\n\n\n");
}

// ========================= MAIN FUNCTION =========================
int main()
{
    f1();
    f1_();
    f2();
    f2_();
    f3();
    f3_();
    return 0;
}
