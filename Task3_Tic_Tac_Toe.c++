#include <iostream>
using namespace std;


void printBoard(char board[3][3]) {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

bool checkWin(char board[3][3], char player) {
    
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
   
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

bool boardFull(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ')
                return false; 
        }
    }
    return true;
}

int main() {
    char board[3][3] = { {' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '} }; 

    bool player1Turn = true; 
    bool gameEnd = false;
    int row, col;

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    
    while (!gameEnd) {
        
        printBoard(board);

        
        char currentPlayer = (player1Turn) ? 'X' : 'O';
        cout << "Player " << currentPlayer << ", enter your move (row [1-3] col [1-3]): ";
        cin >> row >> col;

        
        row--;
        col--;

       
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentPlayer;

           
            if (checkWin(board, currentPlayer)) {
                printBoard(board);
                cout << "Player " << currentPlayer << " wins! Congratulations!" << endl;
                gameEnd = true;
            } else if (boardFull(board)) {
                printBoard(board);
                cout << "It's a tie!" << endl;
                gameEnd = true;
            }

            // Switch turn to the other player
            player1Turn = !player1Turn;
        } else {
            cout << "Invalid move! Please try again." << endl;
        }
    }

    return 0;
}
