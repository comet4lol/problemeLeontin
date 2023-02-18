// Ai un cal pe o tabla de sah. E posibil sa mearga pe toate pozitile fara sa treaca prin aceeasi de 2 ori?

#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 20;
int n;
int t = 1;
int board[MAX][MAX];
int moves[8][2] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool isSafe(int x, int y) {
    return (x >= 1 && x <= n && y >= 1 && y <= n && board[x][y] == 0);
}

void printBoard() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool solve(int x, int y) {
    board[x][y] = t;
    t++;

    if (t > n * n) {
        return true;
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + moves[i][0];
        int nextY = y + moves[i][1];

        if (isSafe(nextX, nextY)) {
            if (solve(nextX, nextY)) {
                return true;
            }
        }
    }

    t--;
    board[x][y] = 0;

    return false;
}

int main() {
    cout << "Enter the size of the board (n x n): ";
    cin >> n;

    int startX, startY;
    cout << "Enter the starting position (x, y): ";
    cin >> startX >> startY;

    if (startX < 1 || startX > n || startY < 1 || startY > n) {
        cout << "Invalid starting position!" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            board[i][j] = 0;
        }
    }

    if (solve(startX, startY)) {
        cout << "Solution found:" << endl;
        printBoard();
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
