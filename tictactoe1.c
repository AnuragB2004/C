#include <stdio.h>
#include <stdlib.h>

// Constants
#define BOARD_SIZE 3

// Functions
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);
int isWinner(char board[BOARD_SIZE][BOARD_SIZE], char player);
int isDraw(char board[BOARD_SIZE][BOARD_SIZE]);

int main()
{
    // Initialize the board
    char board[BOARD_SIZE][BOARD_SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

    // Start the game
    int turn = 'X';
    while (!isWinner(board, turn) && !isDraw(board))
    {
        // Get the player's move
        int row, col;
        printf("Player %c, make your move: ", turn);
        scanf("%d %d", &row, &col);

        // Make the move
        board[row - 1][col - 1] = turn;

        // Switch turns
        turn = (turn == 'X') ? 'O' : 'X';
    }

    // Check for the winner
    if (isWinner(board, turn))
    {
        printf("Congratulations, player %c wins!\n", turn);
    }
    else if (isDraw)
    {
        printf("The game is a draw.\n");
    }

    return 0;
}

// Prints the board
void printBoard(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Returns 1 if the player has won, 0 otherwise
int isWinner(char board[BOARD_SIZE][BOARD_SIZE], char player)
{
    // Check for horizontal wins
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return 1;
        }
    }

    // Check for vertical wins
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
        {
            return 1;
        }
    }

    // Check for diagonal wins
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return 1;
    }

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return 1;
    }

    return 0;
}

// Returns 1 if the game is a draw, 0 otherwise
int isDraw(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }

    return 1;
}
