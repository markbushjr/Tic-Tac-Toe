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

int main() {
    cout << "----------Testing----------" << endl;
    cout << "Starting tests!" << endl;
    cout << endl;

    testSwitchPlayer();
    testValidMove();

    cout << endl;
    cout << "All tests completed!" << endl;
    cout << "----------Testing----------" << endl;

    return 0;
}