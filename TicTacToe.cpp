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

// Function to display the board to the user 
void TicTacToe::displayBoard()
{        
    cout << endl;
    cout << "Board Reference" << endl;
    cout << " 0 | 1 | 2 " << endl;
    cout << "-----------" << endl;
    cout << " 3 | 4 | 5 " << endl;
    cout << "-----------" << endl;
    cout << " 6 | 7 | 8 " << endl;
    cout << endl;

    cout << " Game Board " << endl;
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " " << endl;
    cout << "-----------" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " " << endl;
    cout << "-----------" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " " << endl;
    cout << endl;
} // displayBoard

// Function to get the current player
char TicTacToe::getCurrentPlayer()
{
    return currentPlayer;
} // getCurrentPlayer


// Function to switch to the next player
void TicTacToe::switchPlayer() 
{
    if (currentPlayer == 'X')
    {
        currentPlayer = 'O';
    }
    else
    {
        currentPlayer = 'X';
    } // if
} // switchPlayer