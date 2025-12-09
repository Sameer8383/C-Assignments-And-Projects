#include <stdio.h>
#include <string.h>

// =========================== Q1 ===========================
// Store strings in a 2D array
void inputStrings(char str[][50], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter string %d: ", i + 1);
        fgets(str[i], 50, stdin);   // size updated to 50

        // Remove newline
        for (int l = 0; str[i][l] != '\0'; l++)
        {
            if (str[i][l] == '\n')
            {
                str[i][l] = '\0';
                break;
            }
        }
    }
}

void displayStrings(char str[][50], int n)
{
    for (int i = 0; i < n; i++)
        printf("\n%s\n", str[i]);
}

void f1()
{
    printf("******************************************************************************\n");
    printf(" Q1: Write a function to store strings taken from user, to the given 2D array.\n");
    printf("******************************************************************************\n\n");

    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    char str[n][50]; // size updated
    inputStrings(str, n);
    displayStrings(str, n);

    printf("\n******************************************************************************\n");
    printf("                        END OF PROGRAM 1\n");
    printf("******************************************************************************\n\n\n");
}

// =========================== Q2 ===========================
// Find number of vowels in each string
void findVowels(char str[][50], int n)
{
    char vowels[] = "aeiouAEIOU";

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; str[i][j] != '\0'; j++)
        {
            for (int k = 0; vowels[k] != '\0'; k++)
            {
                if (str[i][j] == vowels[k])
                {
                    count++;
                }
            }
        }

        printf("Vowels in string %d (%s): %d\n", i + 1, str[i], count);
    }
}

void f2()
{
    printf("******************************************************************************\n");
    printf(" Q2: Write a function to find number of vowels in each string.\n");
    printf("******************************************************************************\n\n");

    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    char str[n][50]; // size updated
    inputStrings(str, n);

    printf("\n");
    findVowels(str, n);

    printf("\n******************************************************************************\n");
    printf("                        END OF PROGRAM 2\n");
    printf("******************************************************************************\n\n\n");
}

// =========================== Q3 ===========================
void sortStrings(char str[][50], int n)
{
    char temp[50];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}

void f3()
{
    printf("******************************************************************************\n");
    printf(" Q3: Write a function to sort city names stored in 2D array.\n");
    printf("******************************************************************************\n\n");

    int n = 5;
    char str[5][50] = {"Delhi", "Mumbai", "Bangalore", "Chennai", "Agra"}; // size updated

    printf("Before sorting:\n");
    displayStrings(str, n);

    sortStrings(str, n);
    printf("\nAfter sorting:\n");
    displayStrings(str, n);

    printf("\n******************************************************************************\n");
    printf("                        END OF PROGRAM 3\n");
    printf("******************************************************************************\n\n\n");
}

// =========================== Q4 ===========================
char *trim(char str[])
{
    char temp[100];
    int i, j;

    for (i = 0; str[i]; i++)
        if (str[i] != ' ')
            break;

    if (str[i] != '\0')
        strcpy(temp, str + i);
    else
        temp[0] = '\0';

    for (i = 0; temp[i]; i++);

    for (j = i - 1; j >= 0; j--)
    {
        if (temp[j] != ' ')
            break;
    }

    temp[j + 1] = '\0';
    strcpy(str, temp);

    return str;
}

int countWords(char str[])
{
    int count = 0;
    trim(str);
    if (strlen(str) == 0)
        return 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            count++;

    return count + 1;
}

int splitWords(char str[], char str1[][50], int n) // size updated
{
    int i, j = -1, k = 0;
    int no_of_words = countWords(str);

    if (no_of_words <= n)
    {
        for (i = 0; i < no_of_words; i++)
        {
            k = 0;
            for (j = j + 1; str[j] == ' ' && str[j] != '\0'; j++);
            for (; str[j] != ' ' && str[j] != '\0'; j++)
                str1[i][k++] = str[j];
            str1[i][k] = '\0';
        }
    }

    return no_of_words;
}

void f4()
{
    printf("******************************************************************************\n");
    printf(" Q4: Write a function to store each word of a string into 2D array and display.\n");
    printf("******************************************************************************\n\n");

    char str[100] = "  Hello  World  from  Sameer  ";
    char str1[10][50]; // size updated

    int n = splitWords(str, str1, 10);
    displayStrings(str1, n);

    printf("\n******************************************************************************\n");
    printf("                        END OF PROGRAM 4\n");
    printf("******************************************************************************\n\n\n");
}

// =========================== Q5 ===========================
int removeDuplicates(char str[][50], int n)
{
    sortStrings(str, n);

    int k = 0;
    char temp[10][50]; // size updated
    strcpy(temp[k++], str[0]);

    for (int i = 1; i < n; i++)
        if (strcmp(str[i], str[i - 1]) != 0)
            strcpy(temp[k++], str[i]);

    for (int i = 0; i < k; i++)
        strcpy(str[i], temp[i]);

    return k;
}

void f5()
{
    printf("******************************************************************************\n");
    printf(" Q5: Write a function to remove duplicate names from 2D array.\n");
    printf("******************************************************************************\n\n");

    char str[10][50] = { // size updated
        "Bhopal", "Bhopal", "Delhi", "Delhi", "Jaipur",
        "Kanpur", "Kanpur", "Mangalore", "Mangalore", "Pune"
    };

    int n = 10;

    printf("Original strings:\n");
    displayStrings(str, n);

    n = removeDuplicates(str, n);

    printf("\nAfter removing duplicates:\n");
    displayStrings(str, n);

    printf("\n******************************************************************************\n");
    printf("                        END OF PROGRAM 5\n");
    printf("******************************************************************************\n\n\n");
}

// =========================== MAIN ===========================
int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    return 0;
}

/*
======================== COMMENTS & ALTERNATE METHODS ========================

// QUESTION 3 - 2nd method
// char *trim(char str[])
// int i, j = 0;
// while (str[j] == ' ')
//     j++;
// for (i = 0; str[j]; i++, j++)
//     str[i] = str[j];
// str[i] = '\0';
// while (str[i - 1] == ' ')
//     str[--i] = '\0';
// return str;

// QUESTION 4 - 2nd method
// void splitWords(char str[], char str1[][20])
// {
//     int i = 0, j = 0, k = 0;
//     trim(str);
//     while (str[j] != '\0')
//     {
//         k = 0;
//         while (str[j] == ' ')
//             j++;
//         while (str[j] != ' ' && str[j] != '\0')
//             str1[i][k++] = str[j++];
//         str1[i][k] = '\0';
//         i++;
//     }
// }
*/
