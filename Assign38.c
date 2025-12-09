#include <stdio.h>
#include <string.h>

// Assignment : 38 [ Strings & Functions ]
// [Using normal function & pointer function call]

// ===========================================================
// Q1. Check whether a given string is palindrome or not
// ===========================================================

int isPalindrome(char *str) {
    int i, l;
    for (l = 0; *(str + l) != '\0'; l++);
    for (i = 0; i < l / 2; i++) {
        if (*(str + i) != *(str + l - i - 1))
            return 0;
    }
    return 1;
}

void f1() {
    printf("==============================================================\n");
    printf(" Q1: Write a function to check whether a given string is palindrome or not (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *sptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(sptr))
        printf("\nString \"%s\" is a palindrome.\n", str);
    else
        printf("\nString \"%s\" is not a palindrome.\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 1\n");
    printf("==============================================================\n\n\n");
}

void f1_() {
    printf("==============================================================\n");
    printf(" Q1.1: Write a function to check whether a given string is palindrome or not (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string : ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int (*fptr)(char *) = &isPalindrome;

    if (fptr(ptr))
        printf("\nString \"%s\" is a palindrome.\n", str);
    else
        printf("\nString \"%s\" is not a palindrome.\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 1.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q2. Remove leading and trailing spaces from a string
// ===========================================================

char* trim(char *str) {
    char temp[100];
    char *ptr = str;
    int j, length;

    // Skip leading spaces
    while (*ptr == ' ')
        ptr++;

    // Handle case when string is all spaces or empty
    if (*ptr == '\0') {
        str[0] = '\0';
        return str;
    }

    // Copy remaining string into temp
    strcpy(temp, ptr);

    // Remove trailing spaces
    length = strlen(temp);
    j = length - 1;
    while (j >= 0 && temp[j] == ' ')
        j--;

    temp[j + 1] = '\0'; // Null terminate after last non-space

    // Copy back to original string
    strcpy(str, temp);

    return str;
}

void f2() {
    printf("==============================================================\n");
    printf(" Q2: Write a function to remove leading and trailing spaces from a given string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("\nString after removing leading and trailing spaces: \"%s\"\n", trim(ptr));
    printf("Length of the string is %d\n", (int)strlen(ptr));

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 2\n");
    printf("==============================================================\n\n\n");
}

void f2_() {
    printf("==============================================================\n");
    printf(" Q2.1: Write a function to remove leading and trailing spaces from a given string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char* (*fptr)(char *) = &trim;
    printf("\nString after removing leading and trailing spaces: \"%s\"\n", (fptr)(ptr));
    printf("Length of the string is %d\n", (int)strlen(ptr));

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 2.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q3. Count words in a given string
// ===========================================================

int countWords(char *str) {
    int i, count = 0;

    trim(str);

    for (i = 0; *(str + i) != '\0'; i++)
        if (*(str + i) == ' ')
            count++;
    return count + 1;
}

void f3() {
    printf("==============================================================\n");
    printf(" Q3: Write a function to count words in a given string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int store = countWords(ptr);

    if (store == 1)
        printf("\nThere is %d word in string \"%s\".\n", store, str);
    else
        printf("\nThere are %d words in string \"%s\".\n", store, str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 3\n");
    printf("==============================================================\n\n\n");
}

void f3_() {
    printf("==============================================================\n");
    printf(" Q3.1: Write a function to count words in a given string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int (*fptr)(char *) = &countWords;
    int store = (fptr)(ptr);

    if (store == 1)
        printf("\nThere is %d word in string \"%s\".\n", store, str);
    else
        printf("\nThere are %d words in string \"%s\".\n", store, str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 3.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q4. Reverse words in a given string
// ===========================================================

char * reverseWordsWise(char *str) {
    int n;
    char *ptr = str;

    char temp[10][20];   // to store up to 10 words, each max 20 chars
    int i, j = -1, k;

    n = countWords(ptr);

    for (i = 0; i < n; i++) {
        for (j += 1, k = 0; *(str + j) != ' ' && *(str + j) != '\0'; j++, k++)
            temp[i][k] = *(str + j);
        temp[i][k] = '\0';
    }

    strcpy(str, temp[n - 1]);
    strcat(str, " ");

    for (i = n - 2; i > 0; i--) {
        strcat(str, temp[i]);
        strcat(str, " ");
    }
    strcat(str, temp[0]);
    strcat(str, "\0");

    return str;
}

void f4() {
    printf("==============================================================\n");
    printf(" Q4: Write a function to reverse words in a given string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    reverseWordsWise(ptr);

    printf("\nString after reversing words: \"%s\"\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 4\n");
    printf("==============================================================\n\n\n");
}

void f4_() {
    printf("==============================================================\n");
    printf(" Q4.1: Write a function to reverse words in a given string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    char* (*fptr)(char *) = &reverseWordsWise;
    (fptr)(ptr);

    printf("\nString after reversing words: \"%s\"\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 4.1\n");
    printf("==============================================================\n\n\n");
}

// ===========================================================
// Q5. Case insensitive string comparison
// ===========================================================

int ignoreCase(char ch1, char ch2) {
    if (ch1 == ch2)
        return 1;
    else if (ch1 >= 'a' && ch1 <= 'z') {
        if (ch1 - 32 == ch2)   // convert lowercase to uppercase
            return 1;
    } else if (ch1 >= 'A' && ch1 <= 'Z') {
        if (ch1 + 32 == ch2)   // convert uppercase to lowercase
            return 1;
    }

    return 0;
}

int caseInsensitiveCompare(char *str, char *str2) {
    if (strlen(str) != strlen(str2))
        return 0;
    else {
        for (int i = 0; i < (int)strlen(str); i++) {
            if (!ignoreCase(str[i], str2[i]))
                return 0;
        }
        return 1;
    }
}

void f5() {
    printf("==============================================================\n");
    printf(" Q5: Write a function to do case insensitive string comparison of two strings (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[50], str2[50];
    char *ptr = str, *ptr2 = str2;

    printf("Enter first string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline safely

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    printf("\n");

    if (caseInsensitiveCompare(ptr, ptr2))
        printf("\nStrings are equal.\n");
    else
        printf("\nStrings are not equal.\n");

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 5\n");
    printf("==============================================================\n\n\n");
}

void f5_() {
    printf("==============================================================\n");
    printf(" Q5.1: Write a function to do case insensitive string comparison of two strings (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[50], str2[50];
    char *ptr = str, *ptr2 = str2;

    printf("Enter first string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline safely

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    printf("\n");

    int (*fptr)(char *, char *) = &caseInsensitiveCompare;

    if (fptr(ptr, ptr2))
        printf("\nStrings are equal.\n");
    else
        printf("\nStrings are not equal.\n");

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 5.1\n");
    printf("==============================================================\n\n\n");
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
