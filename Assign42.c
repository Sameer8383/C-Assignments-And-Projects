#include <stdio.h>
#include <string.h>

// Assignment :- 42
// Pointers

// Q1. Write a function to swap values of two in variables of calling function. (TSRN)
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void f1()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q1. Write a function to swap values of two in variables of calling function. (TSRS)\n");
    printf("******************************************************************************\n\n");

    int a = 10, b = 20;

    printf("Before swapping : a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping  : a = %d, b = %d\n", a, b);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 1st.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
// Q2. Write a function to search all occcurences of a given character in a given string.
void search_all_occurences(char *str, char ch, int *arr)
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            arr[j++] = i;
    }
    arr[j] = -1; // end marker
}

void f2()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q2. Write a function to search all occcurences of a given character in a given string.\n");
    printf("    Result of search is a list of indices to be stored in the given array.\n");
    printf("    [void search_all_occurences(char *str, char ch, int *arr)]\n");
    printf("******************************************************************************\n\n");

    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    int arr[100];

    search_all_occurences(str, ch, arr);

    printf("Occurences of '%c' in '%s' are at indices: ", ch, str);

    for (int i = 0; arr[i] != -1; i++)
        printf("%d ", arr[i]);

    printf("\n");
    printf("\n******************************************************************************\n");
    printf("                        End of Program 2nd.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
// Q3. Write a function to convert a given string into uppercase.
char *uppercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return str;
}
void f3()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q3. Write a function to convert a given string into uppercase.\n");
    printf("******************************************************************************\n\n");
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    printf("Uppercase string: %s\n", uppercase(str));

    printf("\n******************************************************************************\n");
    printf("                        End of Program 3rd.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
// Q4. Write a function to convert a given string into lowercase.
char *lowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return str;
}
void f4()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q4. Write a function to convert a given string into lowercase.\n");
    printf("******************************************************************************\n\n");

    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    printf("Lowercase string: %s\n", lowercase(str));

    printf("\n******************************************************************************\n");
    printf("                        End of Program 4th.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
// Q5. Write a function to extract a substring from a given string.
void extract_substring(char *str, int start_index, int end_index, char *result)
{
    int i, j;

    for (j = 0, i = start_index; i < end_index; i++, j++)
        result[j] = str[i];

    result[j] = '\0';
}
void f5()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q5. Write a function to extract a substring from a given string.\n");
    printf("******************************************************************************\n\n");

    char str[100], result[100];
    int start_index, end_index;

    printf("Enter a string : ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    printf("\nEnter start index : ");
    scanf(" %d", &start_index);

    printf("\nEnter end index   : ");
    scanf(" %d", &end_index);

    extract_substring(str, start_index, end_index, result);

    printf("\nExtracted substring: %s\n", result);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 5th.                                  \n");
    printf("******************************************************************************");
    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    printf("\n");
    return 0;
}
