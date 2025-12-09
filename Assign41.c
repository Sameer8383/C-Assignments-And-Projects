#include <stdio.h>
#include <string.h>

// Assignment - 41
// Handling Mupltiple Strings

//-------------------------------------------
//     Q1. Find words ending with 's'
//-------------------------------------------
char *trim(char str[])
{
    char temp[100];
    int i, j;

    // remove leading spaces
    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
            break;
    }

    if (str[i] != '\0')
        strcpy(temp, str + i); //  copy the string after leading spaces
    else
        temp[0] = '\0'; //  handle case when all are spaces

    // find length
    for (i = 0; temp[i]; i++)
        ;

    // remove trailing spaces
    for (j = i - 1; j >= 0; j--)
    {
        if (temp[j] != ' ')
            break;
    }

    temp[j + 1] = '\0'; //  terminate string properly
    strcpy(str, temp);  //  copy back to original string

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

// Same format only minimal corrections done (no structure change)
int splitWords(char str[], char str1[][20], int n)
{
    int i, j = -1, k = 0;

    int no_of_words = countWords(str);

    if (no_of_words <= n)
        for (i = 0; i < no_of_words; i++)
        {
            // Reset k for each new word
            k = 0;

            // Skip extra spaces first
            for (j = j + 1; str[j] == ' ' && str[j] != '\0'; j++)
                ;

            // Copy characters of current word
            for (; str[j] != ' ' && str[j] != '\0'; j++)
                str1[i][k++] = str[j];

            str1[i][k] = '\0'; // Null-terminate each word
        }

    return no_of_words;
}
void f1()
{
    printf("\n******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q1. Write a function to find  words ending with a letter 's' and store each such\n");
    printf("    word in a 2D char array\n");
    printf("******************************************************************************\n\n");

    char str[100] = "mysirg education services and this is a learning platform of students";
    char temp[20][20]; // for stroing all words of given string
    char s[20][20];    // for storing words ending with 's'
    int i, j;
    int no_of_words = splitWords(str, temp, 20);

    for (i = 0, j = 0; i < no_of_words; i++)
        if (temp[i][strlen(temp[i]) - 1] == 's')
            strcpy(s[j++], temp[i]);

    printf("Words ending with 's':\n");
    for (i = 0; i < j; i++)
        printf("%s\n", s[i]);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 1st.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
//-------------------------------------------
//     Q2. Find maximum frequency character
//-------------------------------------------
char maxFrequencyCharacter(char s[][20], int n)
{
    int frequency[256] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; s[i][j] != '\0'; j++)
            frequency[(unsigned char)s[i][j]]++;
    }

    int max = frequency[0];
    char ch = 0;

    for (int i = 1; i < 256; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
            ch = i;
        }
    }
    return ch;
}

void f2()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q2. Write a function to find the character which has maximum frequency in a given\n");
    printf("    string\n");
    printf("******************************************************************************\n\n");

    char str[][20] = {"bhopal", "delhi", "jaipur", "kanpur", "mangalore", "pune"};

    char maxChar = maxFrequencyCharacter(str, 6);

    printf("Maximum frequency character: %c\n", maxChar);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 2nd.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
//-------------------------------------------
//     Q3. Check if two strings are anagram
//-------------------------------------------
int isAnagram(char str1[], char str2[])
{
    int frequency1[256] = {0}, frequency2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
        frequency1[(unsigned char)str1[i]]++;

    for (int i = 0; str2[i] != '\0'; i++)
        frequency2[(unsigned char)str2[i]]++;

    for (int i = 0; i < 256; i++)
        if (frequency1[i] != frequency2[i])
            return 0;
    return 1;
}
void f3()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q3. Write a function to check whether a pair of strings are anagram or not Both\n");
    printf("    strings are stored in 2d char array\n");
    printf("******************************************************************************\n\n");

    char str1[] = {"takes"};
    char str2[] = {"skate "};

    if (isAnagram(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    printf("\n******************************************************************************\n");
    printf("                        End of Program 3rd.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
//-------------------------------------------
//     Q4. Find words starting with 'a'
//-------------------------------------------
void letterStratingWitha(char temp[][20], int no_of_words)
{
    char s[20][20]; // for storing words starting with 'a'
    int i, j = 0;

    for (i = 0; i < no_of_words; i++)
        if (temp[i][0] == 'a')
            strcpy(s[j++], temp[i]);

    printf("Words starting with 'a':\n");
    for (i = 0; i < j; i++)
        printf("%s\n", s[i]);
}

void f4()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q4. Write a function to store all words in a given string which are starting from\n");
    printf("    'a', in a two dimensional char array\n");
    printf("******************************************************************************\n\n");

    char str[100] = "mysirg education services and this is a learning platform of students";
    char temp[20][20]; // for storing all words of given string

    int no_of_words = splitWords(str, temp, 20);

    // Call function
    letterStratingWitha(temp, no_of_words);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 4th.                                  \n");
    printf("******************************************************************************");

    for (int Q = 1; Q < 5; Q++)
        printf("\n");
}
//-------------------------------------------
// Q5. Count number of gmail ids
//-------------------------------------------
int countGmail(char str[][50], int n)
{
    char text[] = "@gmail.com";
    int i, j, k, count = 0;

    for (i = 0; i < n; i++)
    {
        int len = strlen(str[i]);
        if (len >= 10)
        {
            // Compare last 10 characters with "@gmail.com"
            for (j = len - 10, k = 0; j < len; j++, k++)
            {
                if (str[i][j] != text[k])
                    break;
            }

            if (k == 10)
                count++;
        }
    }
    return count;
}

void f5()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q5. Write a function to count number of gmail ids stored in a 2D char array\n");
    printf("******************************************************************************\n\n");

    char emails[5][50] = {
        "abc@gmail.com",
        "xyz@yahoo.com",
        "test@gmail.com",
        "mysirg@outlook.com",
        "hello@gmail.com"};

    int result = countGmail(emails, 5);
    printf("Total Gmail IDs: %d which ends with @gmail.com\n", result);

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
