//tictactoegame
#include <iostream>
#include <vector>

using namespace std;

void display_board(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " | ";
        }
        cout << endl << "---------" << endl;
    }
}

bool check_win(const vector<vector<char>>& board, char player) {
    for (const auto& row : board) {
        if (row[0] == player && row[1] == player && row[2] == player) {
            return true;
        }
    }
    for (int col = 0; col < 3; ++col) {
        if (board[0][col] == player && board[1][col] == player && board[2][col] == player) {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

bool check_draw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}

void switch_player(char& current_player) {
    if (current_player == 'X') {
        current_player = 'O';
    } else {
        current_player = 'X';
    }
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char current_player = 'X';

    while (true) {
        display_board(board);
        int row, col;
        cout << "Player " << current_player << ", enter row (0, 1, or 2): ";
        cin >> row;
        cout << "Player " << current_player << ", enter column (0, 1, or 2): ";
        cin >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = current_player;

        if (check_win(board, current_player)) {
            display_board(board);
            cout << "Player " << current_player << " wins!" << endl;
            break;
        }

        if (check_draw(board)) {
            display_board(board);
            cout << "It's a draw!" << endl;
            break;
        }

        switch_player(current_player);
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
