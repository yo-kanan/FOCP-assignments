#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to display the current state of the word
void displayWord(char word[], char guessedWord[]) {
    printf("Current word: ");
    for (int i = 0; i < strlen(word); i++) {
        printf("%c ", guessedWord[i]);
    }
    printf("\n");
}

// Function to check if the word is completely guessed
int isWordGuessed(char word[], char guessedWord[]) {
    return strcmp(word, guessedWord) == 0;
}

int main() {
    char word[] = "programming"; // The word to guess
    char guessedWord[100];
    char guessedLetter;
    int chances = 3; // Total chances
    int wordLength = strlen(word);
    int correctGuess;

    // Initialize the guessedWord with underscores
    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    printf("Welcome to the Hangman Game!\n");
    printf("Guess the word. You have %d chances.\n", chances);

    while (chances > 0) {
        correctGuess = 0;
        displayWord(word, guessedWord);

        // Input a letter from the user
        printf("Enter a letter: ");
        scanf(" %c", &guessedLetter);

        // Check if the letter is in the word
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guessedLetter && guessedWord[i] != guessedLetter) {
                guessedWord[i] = guessedLetter;
                correctGuess = 1;
            }
        }

        // If no correct guesses, reduce chances
        if (!correctGuess) {
            chances--;
            printf("Wrong guess! You have %d chances left.\n", chances);
        } else {
            printf("Good guess!\n");
        }

        // Check if the word is completely guessed
        if (isWordGuessed(word, guessedWord)) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            return 0;
        }
    }

    // If the user runs out of chances
    printf("Game Over! The word was: %s\n", word);
    return 0;
}