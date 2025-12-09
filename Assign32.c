#include <stdio.h>

int length(char *ptr)
{
    int count = 0;
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == '\n')
        {
            ptr[i] = '\0';
            break;
        }
        if (ptr[i] != ' ')
            count++;
    }
    return count;
}

void f1()
{
    printf("===================================================================================\n");
    printf(" Q1. Find length of a string (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    printf("String: \"%s\"\n", str);
    int len = length(ptr);
    printf("Length of string (excluding spaces): %d\n", len);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 1                                        \n");
    printf("===================================================================================\n\n\n");
}

void f1_()
{
    printf("===================================================================================\n");
    printf(" Q1.1 Find length of a string (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    int (*fptr)(char *) = &length;
    int len = fptr(ptr);

    printf("String: \"%s\"\n", str);
    printf("Length of string (excluding spaces): %d\n", len);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 1.1                                      \n");
    printf("===================================================================================\n\n\n");
}

int occurrences(char *ptr, char ch)
{
    int count = 0;
    for (int i = 0; ptr[i] != '\0'; i++)
        if (ptr[i] == ch)
            count++;
    return count;
}

void f2()
{
    printf("===================================================================================\n");
    printf(" Q2. Count occurrences of a character (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;
    char ch = 'l';

    int count = occurrences(ptr, ch);

    printf("String: \"%s\"\n", str);
    printf("Character '%c' occurs %d times\n", ch, count);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 2                                        \n");
    printf("===================================================================================\n\n\n");
}

void f2_()
{
    printf("===================================================================================\n");
    printf(" Q2.1 Count occurrences of a character (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;
    char ch = 'l';

    int (*fptr)(char *, char) = &occurrences;
    int count = fptr(ptr, ch);

    printf("String: \"%s\"\n", str);
    printf("Character '%c' occurs %d times\n", ch, count);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 2.1                                      \n");
    printf("===================================================================================\n\n\n");
}

int vowels(char *ptr, char *v)
{
    int i, j, count = 0;
    for (i = 0; *(ptr + i) != '\0'; i++)
    {
        for (j = 0; *(v + j) != '\0'; j++)
        {
            if (*(ptr + i) == *(v + j))
            {
                count++;
            }
        }
    }
    return count;
}

void f3()
{
    printf("===================================================================================\n");
    printf(" Q3. Count vowels in a string (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    char str[50] = "Hello World";
    char v[50] = "aeiouAEIOU";

    char *ptr = str;
    char *vptr = v;

    int count = vowels(ptr, vptr);

    printf("String: \"%s\"\n", ptr);
    printf("Number of vowels: %d\n", count);

    printf("\n===================================================================================\n");
    printf("                          END OF PROGRAM 3                                            \n");
    printf("===================================================================================\n\n\n");
}

void f3_()
{
    printf("===================================================================================\n");
    printf(" Q3.1 Count vowels in a string (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    char str[50] = "Hello World";
    char v[50] = "aeiouAEIOU";

    char *ptr = str;
    char *vptr = v;

    int (*fptr)(char *, char *) = &vowels;
    int count = (fptr)(ptr, vptr);

    printf("String: \"%s\"\n", ptr);
    printf("Number of vowels: %d\n", count);

    printf("\n===================================================================================\n");
    printf("                          END OF PROGRAM 3.1                                          \n");
    printf("===================================================================================\n\n\n");
}

int spaces(char *ptr)
{
    int count = 0;
    for (int i = 0; ptr[i] != '\0'; i++)
        if (ptr[i] == ' ')
            count++;
    return count;
}

void f4()
{
    printf("===================================================================================\n");
    printf(" Q4. Count spaces in a string (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    int count = spaces(ptr);

    printf("String: \"%s\"\n", str);
    printf("Number of spaces: %d\n", count);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 4                                        \n");
    printf("===================================================================================\n\n\n");
}

void f4_()
{
    printf("===================================================================================\n");
    printf(" Q4.1 Count spaces in a string (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    int (*fptr)(char *) = &spaces;
    int count = fptr(ptr);

    printf("String: \"%s\"\n", str);
    printf("Number of spaces: %d\n", count);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 4.1                                      \n");
    printf("===================================================================================\n\n\n");
}

void convertIntoUpper(char *ptr)
{
    for (int i = 0; ptr[i] != '\0'; i++)
        if (ptr[i] >= 'a' && ptr[i] <= 'z')
            ptr[i] -= 32;
}

void f5()
{
    printf("===================================================================================\n");
    printf(" Q5. Convert string to uppercase (Normal Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    convertIntoUpper(ptr);

    printf("Uppercase string: \"%s\"\n", str);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 5                                        \n");
    printf("===================================================================================\n\n\n");
}

void f5_()
{
    printf("===================================================================================\n");
    printf(" Q5.1 Convert string to uppercase (Pointer Function Call)\n");
    printf("===================================================================================\n\n");

    char str[100] = "Hello World";
    char *ptr = str;

    void (*fptr)(char *) = &convertIntoUpper;
    fptr(ptr);

    printf("Uppercase string: \"%s\"\n", str);

    printf("\n===================================================================================\n");
    printf("                              END OF PROGRAM 5.1                                      \n");
    printf("===================================================================================\n\n\n");
}

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
