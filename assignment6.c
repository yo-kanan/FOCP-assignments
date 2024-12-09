#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void displayBoard(char board[3][3]);
bool checkWin(char board[3][3], char symbol);
bool isBoardFull(char board[3][3]);
void makeMove(char board[3][3], int player);

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; // Game board
    int currentPlayer = 1; // Player 1 starts the game
    char symbol;
    bool gameWon = false;

    printf("Welcome to Tic Tac Toe Game!\n");
    printf("Player 1: X\nPlayer 2: O\n\n");

    while (!gameWon && !isBoardFull(board)) {
        displayBoard(board);
        makeMove(board, currentPlayer);
        symbol = (currentPlayer == 1) ? 'X' : 'O';
        gameWon = checkWin(board, symbol);

        if (gameWon) {
            displayBoard(board);
            printf("Player %d wins!\n", currentPlayer);
        } else {
            currentPlayer = (currentPlayer == 1) ? 2 : 1; // Switch player
        }
    }

    if (!gameWon) {
        printf("It's a draw!\n");
    }

    return 0;
}

// Function to display the game board
void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

// Function to check if a player has won
bool checkWin(char board[3][3], char symbol) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) ||
            (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)) {
        return true;
    }

    return false;
}

// Function to check if the board is full
bool isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

// Function to make a move
void makeMove(char board[3][3], int player) {
    int choice;
    char symbol = (player == 1) ? 'X' : 'O';
    bool validMove = false;

    while (!validMove) {
        printf("Player %d (%c), enter your move (1-9): ", player, symbol);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9) {
            printf("Invalid move. Please choose a number between 1 and 9.\n");
        } else {
            int row = (choice - 1) / 3;
            int col = (choice - 1) % 3;

            if (board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = symbol;
                validMove = true;
            } else {
                printf("The position is already occupied. Try another spot.\n");
            }
        }
    }
}