#include <iostream>
#include "TicTacToe.h"
using namespace std;

// Function to test switching players
void testSwitchPlayer() {
    TicTacToe game;
    char initialPlayer = game.getCurrentPlayer();
    game.makeMove(0);
    if (game.getCurrentPlayer() != initialPlayer) 
    {
        cout << "testSwitchPlayer passed!" << endl;
    } 
    else 
    {
        cout << "testSwitchPlayer failed!" << endl;
    } // if
} // testSwitchPlayer

// Function to test valid moves
void testValidMove() {
    TicTacToe game;

    if (game.makeMove(0)) 
    {
        cout << "testValidMove (valid move) passed!" << endl;
    } 
    else 
    {
        cout << "testValidMove (valid move) failed!" << endl;
    } // if

    if (!game.makeMove(0)) 
    {
        cout << "testValidMove (already taken) passed!" << endl;
    } 
    else 
    {
        cout << "testValidMove (already taken) failed!" << endl;
    } // if

    if (!game.makeMove(-1)) 
    {
        cout << "testValidMove (out of bounds) passed!" << endl;
    } 
    else 
    {
        cout << "testValidMove (out of bounds) failed!" << endl;
    } // if

    if (!game.makeMove(9)) 
    {
        cout << "testValidMove (out of bounds) passed!" << endl;
    } 
    else 
    {
        cout << "testValidMove (out of bounds) failed!" << endl;
    } // if
} // testValidMove

// Function to test a row winning condition
void testWinningCondition1() {
    TicTacToe game;

    game.makeMove(0);
    game.makeMove(3);
    game.makeMove(1);
    game.makeMove(4);
    game.makeMove(2);
    if (game.getGameOver() && game.getCurrentPlayer() == 'O') 
    {
        cout << "testWinningCondition1 passed!" << endl;
    } 
    else 
    {
        cout << "testWinningCondition1 failed!" << endl;
    } // if
} // testWinnningCondition1

// Function to test a column winning condition
void testWinningCondition2() {
    TicTacToe game;

    game.makeMove(0);
    game.makeMove(1);
    game.makeMove(3);
    game.makeMove(4);
    game.makeMove(6);
    if (game.getGameOver() && game.getCurrentPlayer() == 'O') 
    {
        cout << "testWinningCondition2 passed!" << endl;
    } 
    else 
    {
        cout << "testWinningCondition2 failed!" << endl;
    } // if
} // testWinningCondition2

// Function to test a diagonal winning condition
void testWinningCondition3() {
    TicTacToe game;

    game.makeMove(0);
    game.makeMove(2);
    game.makeMove(1);
    game.makeMove(4);
    game.makeMove(3);
    game.makeMove(6);
    if (game.getGameOver() && game.getCurrentPlayer() == 'X') 
    {
        cout << "testWinningCondition3 passed!" << endl;
    } 
    else 
    {
        cout << "testWinningCondition3 failed!" << endl;
    } // if
} // testWinningCondition3

// Function to test draw condition
void testDrawCondition() {
    TicTacToe game;

    
    game.makeMove(0);
    game.makeMove(1);
    game.makeMove(2);
    game.makeMove(3);
    game.makeMove(5);
    game.makeMove(4);
    game.makeMove(6);
    game.makeMove(8);
    game.makeMove(7);
    
    if (game.getGameOver()) 
    {
        cout << "testDrawCondition passed!" << endl;
    } 
    else 
    {
        cout << "testDrawCondition failed!" << endl;
    } // if
} // testDrawCondition


// Function to test resetting the game
void testResetGame() {
    TicTacToe game;
    game.makeMove(0);
    game.resetGame();
    if (!game.getGameOver()) 
    {
        cout << "testResetGame passed!" << endl;
    } 
    else 
    {
        cout << "testResetGame failed!" << endl;
    }
} // testRestGame

int main() {
    cout << "----------Testing----------" << endl;
    cout << "Starting tests!" << endl;
    cout << endl;

    testSwitchPlayer();
    testValidMove();
    testWinningCondition1();
    testWinningCondition2();
    testWinningCondition3();
    testDrawCondition();
    testResetGame();

    cout << endl;
    cout << "All tests completed!" << endl;
    cout << "----------Testing----------" << endl;

    return 0;
}