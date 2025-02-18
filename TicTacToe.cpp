#include <iostream>
#include "TicTacToe.h"
using namespace std;

// Constructor to initialize and start the game
TicTacToe::TicTacToe()
{
    for (int i = 0; i < 9; i++)
        {
            board[i] = ' ';
        } // for

        currentPlayer = 'X';
        won = false;
        gameOver = false;
        numberOfMoves = 0;
        xWins = 0;
        oWins = 0;
} // TicTacToe