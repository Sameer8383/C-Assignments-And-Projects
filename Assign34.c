#include <stdio.h>
#include <string.h>

// Assignment : 34 String Basics.
// [Using normal function & pointer function call].

// ==================== Q1: Length of string ====================
int length(char *str)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        if (str[i] != ' ')
            count++;
    }
    return count;
}

void f1()
{
    printf("==============================================================\n");
    printf(" Q1: Find length of a string (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World";

    int reserve = length(str);
    printf("\nString \"%s\" has %d characters (excluding spaces)\n", str, reserve);
    printf("\n==============================================================\n\n\n");
}

void f1_()
{
    printf("==============================================================\n");
    printf(" Q1.1: Find length of a string (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    int (*fptr)(char *) = &length;
    int reserve = fptr(ptr);

    printf("\nString \"%s\" has %d characters (excluding spaces)\n", str, reserve);
    printf("\n==============================================================\n\n\n");
}

// ==================== Q2: Occurrences of character ====================
int occurrences(char *str, char ch)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            count++;
    return count;
}

void f2()
{
    printf("==============================================================\n");
    printf(" Q2: Count occurrences of a character (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World", ch = 'l';

    int reserve = occurrences(str, ch);
    printf("\nOccurrences of '%c' in \"%s\" is %d\n", ch, str, reserve);
    printf("\n==============================================================\n\n\n");
}

void f2_()
{
    printf("==============================================================\n");
    printf(" Q2.1: Count occurrences of a character (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World", ch = 'l';
    char *ptr = str;

    int (*fptr)(char *, char) = &occurrences;
    int reserve = fptr(ptr, ch);
    printf("\nOccurrences of '%c' in \"%s\" is %d\n", ch, str, reserve);
    printf("\n==============================================================\n\n\n");
}

// ==================== Q3: Vowels ====================
int vowels(char *str, char *v)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
        for (int j = 0; v[j] != '\0'; j++)
            if (str[i] == v[j])
                count++;
    return count;
}

void f3()
{
    printf("==============================================================\n");
    printf(" Q3: Count occurrences of vowels (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[50] = "Hello World", v[20] = "aeiouAEIOU";

    int reserve = vowels(str, v);
    printf("\nOccurrences of vowels in \"%s\" is %d\n", str, reserve);
    printf("\n==============================================================\n\n\n");
}

void f3_()
{
    printf("==============================================================\n");
    printf(" Q3.1: Count occurrences of vowels (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[50] = "Hello World", v[20] = "aeiouAEIOU";
    char *ptr = str, *vptr = v;

    int (*fptr)(char *, char *) = &vowels;
    int reserve = fptr(ptr, vptr);
    printf("\nOccurrences of vowels in \"%s\" is %d\n", str, reserve);
    printf("\n==============================================================\n\n\n");
}

// ==================== Q4: Spaces ====================
int spaces(char *str)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            count++;
    return count;
}

void f4()
{
    printf("==============================================================\n");
    printf(" Q4: Count occurrences of spaces (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World";

    int reserve = spaces(str);
    printf("\nOccurrences of spaces in \"%s\" is %d\n", str, reserve);
    printf("\n==============================================================\n\n\n");
}

void f4_()
{
    printf("==============================================================\n");
    printf(" Q4.1: Count occurrences of spaces (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    int (*fptr)(char *) = &spaces;
    int reserve = fptr(ptr);
    printf("\nOccurrences of spaces in \"%s\" is %d\n", str, reserve);
    printf("\n==============================================================\n\n\n");
}

// ==================== Q5: Convert to Uppercase ====================
void convertIntoUpper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
}

void f5()
{
    printf("==============================================================\n");
    printf(" Q5: Convert string into uppercase (Normal Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World";

    convertIntoUpper(str);
    printf("\nUppercase string: \"%s\"\n", str);
    printf("\n==============================================================\n\n\n");
}

void f5_()
{
    printf("==============================================================\n");
    printf(" Q5.1: Convert string into uppercase (Pointer Function Call)\n");
    printf("==============================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    void (*fptr)(char *) = &convertIntoUpper;
    fptr(ptr);

    printf("\nUppercase string: \"%s\"\n", str);
    printf("\n==============================================================\n\n\n");
}

// ==================== MAIN ====================
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
