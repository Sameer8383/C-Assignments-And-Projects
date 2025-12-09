#include <stdio.h>
#include <string.h>

// Assignment : 37 [ Strings & Functions ]
// [Using normal function & pointer function call]

// ===========================================================
// Q1. Count vowels in a given string
// ===========================================================

int vowels(char *str, char *v) {
    int i, j, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; v[j] != '\0'; j++) {
            if (str[i] == v[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

void f1() {
    printf("==============================================================\n");
    printf(" Q1: Write a function to count vowels in a given string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100], v[100] = "aeiouAEIOU";
    char *sptr = str, *vptr = v;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int reserve = vowels(sptr, vptr);

    printf("\nString \"%s\" has %d vowels.\n", str, reserve);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 1\n");
    printf("==============================================================\n\n\n");
}

void f1_() {
    printf("==============================================================\n");
    printf(" Q1.1: Write a function to count vowels in a given string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100], v[100] = "aeiouAEIOU";
    char *ptr = str, *vptr = v;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int (*fptr)(char *, char *) = &vowels;
    int reserve = (fptr)(ptr, vptr);

    printf("\nString \"%s\" has %d vowels.\n", str, reserve);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 1.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q2. Find character in string (first occurrence index)
// ===========================================================

int findCharacter(char *str, char character) {
    int i;
    for (i = 0; *(str + i) != '\0'; i++) {
        if (*(str + i) == character)
            return i;
    }
    return -1;
}

void f2() {
    printf("==============================================================\n");
    printf(" Q2: Write a function to find a character in a given string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100], character;
    char *ptr = str;

    printf("Enter string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter character: ");
    scanf("%c", &character);
    getchar(); // consume newline left by scanf

    int store = findCharacter(ptr, character);

    if (store == -1)
        printf("\nCharacter '%c' not found in string \"%s\".\n", character, str);
    else
        printf("\nCharacter '%c' found at index %d in string \"%s\".\n", character, store, str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 2\n");
    printf("==============================================================\n\n\n");
}

void f2_() {
    printf("==============================================================\n");
    printf(" Q2.1: Write a function to find a character in a given string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100], character;
    char *ptr = str;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';   // remove newline safely

    printf("Enter character: ");
    scanf("%c", &character);
    getchar(); // consume newline

    int (*fptr)(char *, char) = &findCharacter;
    int store = (fptr)(ptr, character);

    if (store == -1)
        printf("\nCharacter '%c' not found in string \"%s\".\n", character, str);
    else
        printf("\nCharacter '%c' found at index %d in string \"%s\".\n", character, store, str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 2.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q3. Find character in string between specified indices
// ===========================================================

int foundCharacter(char *str, char character, int startIndex, int endIndex) {
    int i;
    for (i = startIndex; i < endIndex && *(str + i) != '\0'; i++) {
        if (*(str + i) == character)
            return i;
    }
    return -1;
}

void f3() {
    printf("==============================================================\n");
    printf(" Q3: Write a function to find character in a given string between specified indices (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str1[100], character;
    char *ptr1 = str1;

    int startIndex = 0, endIndex = 4;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter a character: ");
    scanf("%c", &character);
    getchar(); // consume newline

    int store = foundCharacter(ptr1, character, startIndex, endIndex);

    if (store == -1)
        printf("\nCharacter '%c' not found in string \"%s\" between indices %d and %d.\n", character, str1, startIndex, endIndex);
    else
        printf("\nCharacter '%c' found at index %d in string \"%s\" between indices %d and %d.\n", character, store, str1, startIndex, endIndex);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 3\n");
    printf("==============================================================\n\n\n");
}

void f3_() {
    printf("==============================================================\n");
    printf(" Q3.1: Write a function to find character in a given string between specified indices (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str1[100], character;
    char *ptr1 = str1;

    int startIndex = 0, endIndex = 4;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter a character: ");
    scanf("%c", &character);
    getchar(); // consume newline

    int (*fptr)(char *, char, int, int) = &foundCharacter;
    int store = (fptr)(ptr1, character, startIndex, endIndex);

    if (store == -1)
        printf("\nCharacter '%c' not found in string \"%s\" between indices %d and %d.\n", character, str1, startIndex, endIndex);
    else
        printf("\nCharacter '%c' found at index %d in string \"%s\" between indices %d and %d.\n", character, store, str1, startIndex, endIndex);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 3.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q4. Swap two characters in a string
// ===========================================================

void swapCharacters(char *str, int index1, int index2) {
    char temp;
    temp = *(str + index1);
    *(str + index1) = *(str + index2);
    *(str + index2) = temp;
}

void f4() {
    printf("==============================================================\n");
    printf(" Q4: Write a function to swap two characters of a given string with specified indices (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    int index1 = 0, index2 = 2;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    swapCharacters(str, index1, index2);

    printf("\n \"%s\" after swapping characters at indices %d and %d is \"%s\".\n", str, index1, index2, str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 4\n");
    printf("==============================================================\n\n\n");
}

void f4_() {
    printf("==============================================================\n");
    printf(" Q4.1: Write a function to swap two characters of a given string with specified indices (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    int index1 = 0, index2 = 2;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    void (*fptr)(char *, int, int) = &swapCharacters;
    (fptr)(ptr, index1, index2);

    printf("\n \"%s\" after swapping characters at indices %d and %d is \"%s\".\n", str, index1, index2, str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 4.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q5. Check alphanumeric string
// ===========================================================

int isAlphaNumeric(char *str) {
    int i, digit = 0, alpha = 0;
    for (i = 0; *(str + i) != '\0'; i++) {
        if (*(str + i) >= '0' && *(str + i) <= '9')
            digit = 1;

        if ((*(str + i) >= 'a' && *(str + i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z'))
            alpha = 1;
    }
    return digit && alpha;
}

void f5() {
    printf("==============================================================\n");
    printf(" Q5: Write a function to check a given string is an alphanumeric string or not (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline safely

    int result = isAlphaNumeric(ptr);

    if (result)
        printf("\nString \"%s\" is an alphanumeric string.\n", str);
    else
        printf("\nString \"%s\" is not an alphanumeric string.\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 5\n");
    printf("==============================================================\n\n\n");
}

void f5_() {
    printf("==============================================================\n");
    printf(" Q5.1: Write a function to check a given string is an alphanumeric string or not (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline safely

    int (*fptr)(char *) = &isAlphaNumeric;
    int store = (fptr)(ptr);

    if (store)
        printf("\nString \"%s\" is an alphanumeric string.\n", str);
    else
        printf("\nString \"%s\" is not an alphanumeric string.\n", str);

    printf("\n\n==============================================================\n");
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
