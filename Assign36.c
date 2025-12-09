#include <stdio.h>
#include <string.h>

// Assignment : 36 [ Strings & Functions ]
// [Using normal function & pointer function call]

// ===========================================================
// Q1. Length of string (excluding spaces)
// ===========================================================

// Function to find length (excluding spaces)
int length(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        if (str[i] != ' ')
            count++;
    }
    return count;
}

void f1() {
    printf("==============================================================\n");
    printf(" Q1: Write a function to find the length of the string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int reserve = length(ptr);
    printf("\nString \"%s\" has %d characters (excluding spaces)\n", str, reserve);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 1\n");
    printf("==============================================================\n\n\n");
}

void f1_() {
    printf("==============================================================\n");
    printf(" Q1.1: Write a function to find the length of the string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int (*fptr)(char*) = &length;
    int reserve = (fptr)(ptr);

    printf("\nString \"%s\" has %d characters (excluding spaces)\n", str, reserve);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 1.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q2. Reverse a string
// ===========================================================

char* reverse(char *str) {
    int i, temp, len = 0;
    for (i = 0; str[i] != '\0'; i++);
    len = i - 1;
    int mid = len / 2;

    for (i = 0; i <= mid; i++) {
        temp = str[i];
        str[i] = str[len - i];
        str[len - i] = temp;
    }
    return str;
}

void f2() {
    printf("==============================================================\n");
    printf(" Q2: Write a function to reverse a string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    char *reserve = reverse(str);
    printf("\nReverse of string \"%s\" is \"%s\"\n", str, reserve);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 2\n");
    printf("==============================================================\n\n\n");
}

void f2_() {
    printf("==============================================================\n");
    printf(" Q2.1: Write a function to reverse a string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    char* (*fptr)(char*) = &reverse;
    char *reserve = (fptr)(str);

    printf("\nReverse of string \"%s\" is \"%s\"\n", str, reserve);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 2.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q3. Compare two strings
// ===========================================================

int compare(char *str1, char *str2) {
    int i;
    for (i = 0; *(str1 + i) != '\0' || *(str2 + i) != '\0'; i++) {
        if (str1[i] != str2[i])
            return *(str1 + i) - *(str2 + i);
    }
    return *(str1 + i) - *(str2 + i);
}

void f3() {
    printf("==============================================================\n");
    printf(" Q3: Write a function to compare two strings (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    int result = compare(str1, str2);

    if (result == 0)
        printf("\nBoth strings are equal.\n");
    else
        printf("\nBoth strings are not equal.\n");

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 3\n");
    printf("==============================================================\n\n\n");
}

void f3_() {
    printf("==============================================================\n");
    printf(" Q3.1: Write a function to compare two strings (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    int (*fptr)(char*, char*) = &compare;
    int result = (fptr)(str1, str2);

    if (result == 0)
        printf("\nBoth strings are equal.\n");
    else
        printf("\nBoth strings are not equal.\n");

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 3.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q4. Convert string into uppercase
// ===========================================================

void convertIntoUpper(char *str) {
    for (int i = 0; *(str + i) != '\0'; i++)
        if (*(str + i) >= 'a' && *(str + i) <= 'z')
            *(str + i) = *(str + i) - 32;
}

void f4() {
    printf("==============================================================\n");
    printf(" Q4: Write a function to convert a string into uppercase (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    convertIntoUpper(ptr);

    printf("\nUppercase string is \"%s\"\n", str);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 4\n");
    printf("==============================================================\n\n\n");
}

void f4_() {
    printf("==============================================================\n");
    printf(" Q4.1: Write a function to convert a string into uppercase (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    void (*fptr)(char*) = &convertIntoUpper;
    (fptr)(ptr);

    printf("\nUppercase string is \"%s\"\n", str);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 4.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q5. Convert string into lowercase
// ===========================================================

void convertIntoLower(char *str) {
    for (int i = 0; *(str + i) != '\0'; i++)
        if (*(str + i) >= 'A' && *(str + i) <= 'Z')
            *(str + i) = *(str + i) + 32;
}

void f5() {
    printf("==============================================================\n");
    printf(" Q5: Write a function to convert a string into lowercase (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    convertIntoLower(ptr);

    printf("\nLowercase string is \"%s\"\n", str);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 5\n");
    printf("==============================================================\n\n\n");
}

void f5_() {
    printf("==============================================================\n");
    printf(" Q5.1: Write a function to convert a string into lowercase (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    void (*fptr)(char*) = &convertIntoLower;
    (fptr)(ptr);

    printf("\nLowercase string is \"%s\"\n", str);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 5.1\n");
    printf("==============================================================\n\n");
}

// ===========================================================
// MAIN
// ===========================================================

int main() {

    f1();  f1_();
    f2();  f2_();
    f3();  f3_();
    f4();  f4_();
    f5();  f5_();

    return 0;
}
