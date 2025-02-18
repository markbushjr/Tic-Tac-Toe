#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
    private:
    char board[9];
    char currentPlayer;
    int numberOfMoves;
    bool gameOver;
    bool won;
    bool xWins;
    bool oWins;

    public:
    TicTacToe();
    void displayBoard();
    char getCurrentPlayer();
    void switchPlayer();
    bool makeMove(int index);
    void checkWin();
    void result();
    bool getGameOver();
    void resetGame();
    void displayScore();
};


#endif