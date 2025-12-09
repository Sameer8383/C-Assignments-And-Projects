#include <stdio.h>
#include <string.h>

// Assignment : 35 [ String Basics]
// [Using normal function & pointer function call]

// Q1. Convert a string into lowercase
void convertIntoLower(char *str) {
    for (int i = 0; *(str + i) != '\0'; i++)
        if (*(str + i) >= 'A' && *(str + i) <= 'Z')
            *(str + i) = *(str + i) + 32;
}

void f1() {
    printf("==============================================================\n");
    printf(" Q1: Convert a string into lowercase (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    convertIntoLower(ptr);

    printf("\nLowercase string is \"%s\"\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 1\n");
    printf("==============================================================\n\n\n");
}

void f1_() {
    printf("==============================================================\n");
    printf(" Q1.1: Convert a string into lowercase (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    void (*fptr)(char *) = &convertIntoLower;
    (fptr)(ptr);

    printf("\nLowercase string is \"%s\"\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 1.1\n");
    printf("==============================================================\n\n\n");
}

// Q2. Reverse a string
char* reverse(char *str) {
    int len = strlen(str) - 1;
    for (int i = 0; i < len / 2 + 1; i++) {
        char temp = str[i];
        str[i] = str[len - i];
        str[len - i] = temp;
    }
    return str;
}

void f2() {
    printf("==============================================================\n");
    printf(" Q2: Reverse a string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    char *res = reverse(str);
    printf("\nReverse of string \"%s\"\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 2\n");
    printf("==============================================================\n\n\n");
}

void f2_() {
    printf("==============================================================\n");
    printf(" Q2.1: Reverse a string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    char *(*fptr)(char *) = &reverse;
    char *res = (fptr)(str);

    printf("\nReverse of string \"%s\"\n", str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 2.1\n");
    printf("==============================================================\n\n\n");
}

// Q3. Count alphabets, digits, special characters
void count(char *str) {
    int alphabets = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) alphabets++;
        else special++;
    }
    printf("\nTotal number of alphabets in the string is : %d", alphabets);
    printf("\nTotal number of digits in the string is : %d", digits);
    printf("\nTotal number of special characters in the string is : %d\n", special);
}

void f3() {
    printf("==============================================================\n");
    printf(" Q3: Count alphabets, digits, and special characters (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    printf("Enter any string: ");
    fgets(str, 100, stdin);

    count(str);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 3\n");
    printf("==============================================================\n\n\n");
}

void f3_() {
    printf("==============================================================\n");
    printf(" Q3.1: Count alphabets, digits, and special characters (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;
    printf("Enter any string: ");
    fgets(str, 100, stdin);

    void (*fptr)(char *) = &count;
    (fptr)(ptr);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 3.1\n");
    printf("==============================================================\n\n\n");
}

// Q4. Copy one string to another
char* copy(char *src, char *dest) {
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        dest[i+1] = '\0';
    }
    return dest;
}

void f4() {
    printf("==============================================================\n");
    printf(" Q4: Copy one string to another (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str1[100], str2[100];
    printf("Enter any string: ");
    fgets(str1, 100, stdin);

    copy(str1, str2);

    printf("\nFirst string = %s", str1);
    printf("\nSecond string = %s\n", str2);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 4\n");
    printf("==============================================================\n\n\n");
}

void f4_() {
    printf("==============================================================\n");
    printf(" Q4.1: Copy one string to another (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str1[100], str2[100];
    char *(*fptr)(char *, char *) = &copy;

    printf("Enter any string: ");
    fgets(str1, 100, stdin);

    (fptr)(str1, str2);

    printf("\nFirst string = %s", str1);
    printf("\nSecond string = %s\n", str2);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 4.1\n");
    printf("==============================================================\n\n\n");
}

// Q5. First occurrence of a character
int firstOccurance(char *str, char ch) {
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            return i;
    return -1;
}

void f5() {
    printf("==============================================================\n");
    printf(" Q5: First occurrence of a character (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100], ch;
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    printf("Enter character to find: ");
    scanf("%c", &ch);

    int index = firstOccurance(str, ch);
    if (index != -1)
        printf("\nFirst occurrence of '%c' is found at index %d\n", ch, index);
    else
        printf("\n'%c' is not found in the string\n", ch);

    printf("\n\n==============================================================\n");
    printf("                        END OF PROGRAM 5\n");
    printf("==============================================================\n\n\n");
}

void f5_() {
    printf("==============================================================\n");
    printf(" Q5.1: First occurrence of a character (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100], ch;
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    printf("Enter character to find: ");
    scanf("%c", &ch);

    int (*fptr)(char *, char) = &firstOccurance;
    int index = (fptr)(str, ch);

    if (index != -1)
        printf("\nFirst occurrence of '%c' is found at index %d\n", ch, index);
    else
        printf("\n'%c' is not found in the string\n", ch);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 5.1\n");
    printf("==============================================================\n\n");
}

int main() {
    // f1(); f1_();
    // f2(); f2_();
    // f3(); f3_();
    // f4(); f4_();
    // f5();
    f5_();
    return 0;
}
