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

// Function to make a move on the board
bool TicTacToe::makeMove(int index) {
    if (index < 0 || index >= 9) {
        cout << "Invalid board index! Try again." << endl;
        cout << "Please choose a position between 0 and 8: ";
        return false;
    } else if (board[index] != ' ') {
        cout << "Position already taken! Try again." << endl;
        cout << "Please enter a valid number between 0 and 8: ";
        return false;
    } else
    {
        board[index] = currentPlayer;
        numberOfMoves++;
        checkWin();
        switchPlayer();
        return true;
    } // if
} // makeMoke

// Function to check if the game has been won or not
void TicTacToe::checkWin() {
    for (int i = 0; i < 3; i++)
    {
        // columns
        if (board[i] != ' ' && board[i] == board[i + 3] && board[i] == board[i + 6] )
        {
            won = true;
            gameOver = true;
            return;
        } //if 

        // rows
        int j = i * 3;
        if (board[j] != ' ' && board[j] == board[j + 1] && board[j] == board[j + 2] )
        {
            won = true;
            gameOver = true;
            return;
        } //if
    } // for

    // diagonals
    if ((board[0] != ' ' && board[0] == board[4] && board[0] == board[8] ) || 
        (board[2] != ' ' && board[2] == board[4] && board[2] == board[6] ))
    {
        won = true;
        gameOver = true;
        return;
    } // if

    // draw
    if (numberOfMoves == 9) {
        gameOver = true;
    }
            
} // checkwin

// Function to get the value in gameOver
bool TicTacToe::getGameOver()
{
    return gameOver;
} // getGameOver