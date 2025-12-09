#include <stdio.h>
#include <string.h>
// Assignment : 39 [ Strings & Functions ]
// [Using normal function & pointer function call]

// =========================== Q1 ===========================
void sortString(char *str)
{
    int r, i, temp;
    int n = strlen(str);

    for (r = 0; r < n - 1; r++)
    {
        for (i = 0; i < n - 1 - r; i++)
        {
            if (*(str + i) > *(str + i + 1))
            {
                temp = *(str + i);
                *(str + i) = *(str + i + 1);
                *(str + i + 1) = temp;
            }
        }
    }
}

void countFrequency(char *str)
{
    int i, count;
    int n = strlen(str);

    sortString(str);

    printf("Sorted string is: %s\n", str);
    printf("\nFrequency of each character in the given string:\n");
    printf("Character\tFrequency\n");
    printf("---------\t----------\n");

    for (i = 0; i < n; i++)
    {
        count = 1;

        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("  %c\t\t  %d\n", str[i], count);
    }
}

void f1()
{
    printf("==============================================================\n");
    printf(" Q1: Write a function to count frequency of each character of the given string\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    countFrequency(ptr);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 1\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q1.1 ===========================
void f1_()
{
    printf("==============================================================\n");
    printf(" Q1.1: Using pointer function call to count frequency\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    void (*fptr)(char *) = countFrequency;
    fptr(ptr);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 1.1\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q2 ===========================
int findWord(char *str, char *word)
{
    int i, j;
    int worldLength = strlen(word);
    int stringLength = strlen(str);

    for (i = 0; i < stringLength - worldLength + 1; i++)
    {
        for (j = 0; j < worldLength; j++)
        {
            if (str[i + j] != word[j])
                break;
        }
        if (j == worldLength)
            return 1;
    }
    return -1;
}

void f2()
{
    printf("==============================================================\n");
    printf(" Q2: Write a function to find the word in the given string\n");
    printf("==============================================================\n\n");

    char str[100], word[100];
    char *ptr = str, *ptr1 = word;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a word to find: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    if (!findWord(ptr, ptr1))
        printf("Word not found in the string.\n");
    else
        printf("Word found in the string.\n");

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 2\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q2.1 ===========================
void f2_()
{
    printf("==============================================================\n");
    printf(" Q2.1: Using pointer function call to find the word\n");
    printf("==============================================================\n\n");

    char str[100], word[100];
    char *ptr = str, *ptr1 = word;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a word to find: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    int (*fptr)(char *, char *) = &findWord;
    if (!fptr(ptr, ptr1))
        printf("Word not found in the string.\n");
    else
        printf("Word found in the string.\n");

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 2.1\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q3 ===========================
char *capitalizeFirstLetter(char *str)
{
    int i, j = -1, k, n;
    n = strlen(str);

    for (i = 0; i < n; i++)
    {
        for (j++, k = 0; *(str + j) != ' ' && *(str + j) != '\0'; j++, k++)
        {
            if (k == 0)
                *(str + j) = str[j] - 32;
        }
    }
    return str;
}

void f3()
{
    printf("==============================================================\n");
    printf(" Q3: Write a function to make first letter of each word capital\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Original string: %s\n", str);
    printf("String with first letter of each word capital: %s\n", capitalizeFirstLetter(ptr));

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 3\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q3.1 ===========================
void f3_()
{
    printf("==============================================================\n");
    printf(" Q3.1: Using pointer function call to capitalize first letter\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Original string: %s\n", str);
    char *(*fptr)(char *) = &capitalizeFirstLetter;

    printf("String with first letter of each word capital: %s\n", fptr(ptr));

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 3.1\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q4 ===========================
int countWords(char *str)
{
    int i, count = 0;
    int n = strlen(str);

    for (i = 0; i < n; i++)
    {
        if (*(str + i) == ' ')
            count++;
    }

    return count + 1;
}

char *acronymName(char *str)
{
    static char temp[100];
    int i, j = 1, k = 0, n;

    if (str[0] >= 'a' && str[0] <= 'z')
        temp[0] = str[0] - 32;
    else
        temp[0] = str[0];

    n = countWords(str);

    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ')
        {
            j++;
            if (j == n)
            {
                temp[++k] = ' ';
                if (str[i] >= 'a' && str[i] <= 'z')
                    temp[++k] = str[i] - 32;
                else
                    temp[++k] = str[i];

                for (i++; str[i] != '\0'; i++)
                    temp[++k] = str[i];

                temp[++k] = '\0';
                break;
            }
            else
            {
                temp[++k] = ' ';
                if (str[i] >= 'a' && str[i] <= 'z')
                    temp[++k] = str[i] - 32;
                else
                    temp[++k] = str[i];
            }
        }
    }

    temp[++k] = '\0';
    strcpy(str, temp);
    return str;
}

void f4()
{
    printf("==============================================================\n");
    printf(" Q4: Write a function to make acronym name from a given name\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Original string: %s\n\n", str);
    printf("Acronym name: %s\n", acronymName(ptr));

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 4\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q4.1 ===========================
void f4_()
{
    printf("==============================================================\n");
    printf(" Q4.1: Using pointer function call to make acronym name\n");
    printf("==============================================================\n\n");

    char str[100];
    char *ptr = str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: %s\n\n", str);
    char *(*fptr)(char *) = &acronymName;

    printf("Acronym name: %s\n", fptr(ptr));

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 4.1\n");
    printf("==============================================================\n\n\n");
}

// =========================== Q5 ===========================
char *concatenate(char *str1, char *str2)
{
    int i, j;

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++)
        ;
    str1[i] = ' ';
    i++;

    for (j = 0; str2[j] != '\0'; j++, i++)
        str1[i] = str2[j];

    str1[i] = '\0';

    return str1;
}
void f5()
{
    printf("==============================================================\n");
    printf(" Q5: Write a function to concatenate two strings\n");
    printf("==============================================================\n\n");

    char str1[100], str2[100];
    char *ptr1 = str1, *ptr2 = str2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\nEnter second string: ");
    fgets(str2, sizeof(str2), stdin);

    char *concatStr = concatenate(ptr1, ptr2); // <- fixed type

    printf("\nConcatenated string: %s\n", concatStr);
    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 5\n");
    printf("==============================================================\n\n\n");
}
// =========================== Q5.1 ===========================
void f5_()
{
    printf("==============================================================\n");
    printf(" Q5.1: Using pointer function call to concatenate two strings\n");
    printf("==============================================================\n\n");

    char str1[100], str2[100];
    char *ptr1 = str1, *ptr2 = str2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\n\nEnter second string: ");
    fgets(str2, sizeof(str2), stdin);

    char *(*fptr)(char *, char *) = &concatenate;
    char *concatStr = (fptr)(ptr1, ptr2);
    printf("\n\nConcatenated string: %s \n", concatStr);

    printf("\n==============================================================\n");
    printf("                        END OF PROGRAM 5.1\n");
    printf("==============================================================\n\n\n");
}
// =========================== MAIN ===========================
int main()
{
    // f1();
    // f1_();
    // f2();
    // f2_();
    // f3();
    // f3_();
    // f4();
    // f4_();
    f5();
    f5_();

    return 0;
}
