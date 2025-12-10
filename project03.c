#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// Project 03.
// Guess My Number Game with Enhanced User Interaction
int generateNumber(int round);
int checkGuess(int myNumber, int guess);
void playRound(int round);
int askReplay();

// Generate random number 1-10
int generateNumber(int round)
{
    srand(time(NULL) + round);
    return (rand() % 10) + 1;
}

// Check guess against number
int checkGuess(int myNumber, int guess)
{
    if (guess == myNumber)
        return 1;
    else if (guess < myNumber)
        return -1;
    else
        return 0;
}

// Play one round
void playRound(int round)
{
    printf("\n=============================================================\n");
    printf("ROUND %d - GUESS MY NUMBER\n", round);
    printf("=============================================================\n\n");

    int myNumber = generateNumber(round);
    int guess, attempts = 0;
    int maxAttempts = 3;

    printf("I am thinking of a number between 1 and 10.\n");
    printf("You have %d attempts to guess it!\n\n", maxAttempts);

    while (attempts < maxAttempts)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        int result = checkGuess(myNumber, guess);

        if (result == 1)
        {
            printf("\n+++++============+++++============+++++\n");
            printf("CONGRATULATIONS! YOU GUESSED IT!\n");
            printf("The secret number was: %d\n", myNumber);
            printf("Attempts used: %d\n", attempts);
            printf("Performance: %s\n",
                   (attempts == 1) ? "Mind-blowing! First try!"
                   : (attempts == 2) ? "Great job! Almost perfect!"
                                     : "Well done! You did it!");
            printf("+++++============+++++============+++++\n");
            return;
        }
        else if (result == -1)
            printf("Too low! Try a higher number.\n\n");
        else
            printf("Too high! Try a lower number.\n\n");
    }

    printf("\nSorry! Maximum attempts reached (%d).\n", maxAttempts);
    printf("The secret number was: %d\n", myNumber);
    printf("Better luck next time!\n");
}

// Ask if player wants to play again
int askReplay()
{
    char playAgain[10];
    printf("\nDo you want to play another round? (Yes/No/Exit): ");
    scanf("%s", playAgain);

    if (strcmp(playAgain, "Yes") == 0 || strcmp(playAgain, "yes") == 0)
    {
        printf("\n=============================================================\n");
        printf("Awesome! You're back for another round!\n");
        printf("Can you guess it faster this time? Let's find out!\n");
        printf("=============================================================\n\n");
        return 1;
    }
    else if (strcmp(playAgain, "No") == 0 || strcmp(playAgain, "no") == 0)
    {
        printf("\n=============================================================\n");
        printf("Alright! Take a break and come back soon!\n");
        printf("Thanks for playing!\n");
        printf("=============================================================\n\n");
        return 0;
    }
    else
    {
        printf("\n=============================================================\n");
        printf("Invalid choice! Exiting the game.\n");
        printf("Hope to see you again soon!\n");
        printf("=============================================================\n\n");
        return 0;
    }
}

int main()
{
    printf("\n=============================================================\n");
    printf("WELCOME TO GUESS MY NUMBER GAME\n");
    printf("=============================================================\n");

    int round = 1;
    do
    {
        playRound(round);
        round++;
    } while (askReplay());

    printf("\n=============================================================\n");
    printf("Thank you for playing Guess My Number!\n");
    printf("Keep practicing and improving your guessing skills!\n");
    printf("Developed by: Sameer Sharma\n");
    printf("Version: 2.0 - The Smarter You Guess, The Cooler You Get!\n");
    printf("=============================================================\n\n");

    return 0;
}
