#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to get the computer's choice
const char* getComputerChoice(int randomNumber) {
    if (randomNumber < 33)
        return "Rock";
    else if (randomNumber < 66)
        return "Paper";
    else
        return "Scissors";
}

// Function to determine the winner
const char* determineWinner(const char* userChoice, const char* computerChoice) {
    if (strcmp(userChoice, computerChoice) == 0) {
        return "It's a Draw!";
    } else if ((strcmp(userChoice, "Rock") == 0 && strcmp(computerChoice, "Scissors") == 0) ||
               (strcmp(userChoice, "Paper") == 0 && strcmp(computerChoice, "Rock") == 0) ||
               (strcmp(userChoice, "Scissors") == 0 && strcmp(computerChoice, "Paper") == 0)) {
        return "You Win!";
    } else {
        return "Computer Wins!";
    }
}

int main() {
    char userChoice[10];
    int randomNumber;

    // Seed the random number generator
    srand(time(0));

    printf("Welcome to Rock-Paper-Scissors Game!\n");
    printf("Enter your choice (Rock, Paper, Scissors): ");
    scanf("%s", userChoice);

    // Generate a random number between 0 and 100
    randomNumber = rand() % 101;

    // Get computer's choice
    const char* computerChoice = getComputerChoice(randomNumber);

    // Display choices
    printf("You chose: %s\n", userChoice);
    printf("Computer chose: %s\n", computerChoice);

    // Determine and display the winner
    printf("%s\n", determineWinner(userChoice, computerChoice));

    return 0;
}