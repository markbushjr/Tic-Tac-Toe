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

int main() {
    cout << "----------Testing----------" << endl;
    cout << "Starting tests!" << endl;
    cout << endl;

    testSwitchPlayer();

    cout << endl;
    cout << "All tests completed!" << endl;
    cout << "----------Testing----------" << endl;

    return 0;
}