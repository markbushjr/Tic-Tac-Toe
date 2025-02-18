#include <iostream>
#include "TicTacToe.h"
using namespace std;

int main()
{
    TicTacToe game;
    int position;
    char rematch;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    do
    {
        while (!game.getGameOver()) 
        {
            game.displayBoard();
            cout << "Player " << game.getCurrentPlayer() << ", make your move! Enter a position from 0-8: ";

            while (true) {
                if (cin >> position) 
                {
                    if (game.makeMove(position)) 
                    {
                        break;
                    } // if
                } 
                else 
                { 
                    cout << "Invalid input! Please enter a valid number between 0 and 8: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } // if
            } // while

        } // while

        game.displayBoard();
        game.result();

        game.displayScore();

        cout << "Play agin? (y/n): ";
        cin >> rematch;
        cout << endl;
        if (rematch == 'y' || rematch == 'Y') {
            game.resetGame();
        } // if

    } while (rematch == 'y'  || rematch == 'Y'); // while

    cout << "Closing Tic-Tac-Toe!" << endl;
    return 0;
} // main