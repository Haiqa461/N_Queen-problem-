#include <iostream>
#include <iomanip>

using namespace std;

// Function to initialize the chessboard with all cells as empty
void initializeBoard(char board[][8], int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            board[i][j] = '.';
        }
    }
}

// Function to display the chessboard
void displayBoard(char board[][8], int N) {
    cout << "Current Board State:\n";
    cout << "  ";
    for (int j = 0; j < N; ++j) {
        cout << setw(2) << j << " ";
    }
    cout << endl;
    for (int i = 0; i < N; ++i) {
        cout << setw(2) << i << " ";
        for (int j = 0; j < N; ++j) {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if placing a queen at position (row, col) is safe
bool isSafe(char board[][8], int row, int col, int N) {
    // Check row
    for (int i = 0; i < col; ++i) {
        if (board[row][i] == 'Q') {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; i < N && j >= 0; ++i, --j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

// Function to solve N-Queen problem recursively
bool solveNQueensUtil(char board[][8], int col, int N, bool &backtracked) {
    // Base case: If all queens are placed, return true
    if (col == N) {
        return true;
    }

    // Try placing a queen in each row of the current column
    for (int i = 0; i < N; ++i) {
        // Check if queen can be placed at board[i][col]
        if (isSafe(board, i, col, N)) {
            // Place the queen
            board[i][col] = 'Q';

            // Display the board after placing the queen
            displayBoard(board, N);

            // Recur to place rest of the queens
            if (solveNQueensUtil(board, col + 1, N, backtracked)) {
                return true;
            }

            // If placing queen at board[i][col] doesn't lead to a solution,
            // then backtrack and remove the queen from board[i][col]
            board[i][col] = '.';

            // Set the backtracking flag to true to indicate a backtrack
            backtracked = true;
        }
    }

    // If no queen can be placed in any row of the current column, return false
    if (backtracked) {
        cout << "Backtracking...\n" << endl;
        backtracked = false; // Reset the flag
    }
    return false;
}

// Function to solve the N-Queen problem and display the solution
void solveNQueens() {
    int N;
    cout << "Welcome to the N-Queens Solver!\n";
    cout << "Please enter the number of queens (greater than or equals to 4 for meaningful solutions): ";
    cin >> N;

    if (N <= 3) {
        cout << "The number of queens should be greater than or equal to 4. Please restart the program and try again." << endl;
        return;
    }

    char board[8][8];
    initializeBoard(board, N);

    // Display initial empty board
    cout << "\nInitial empty board:" << endl;
    displayBoard(board, N);

    // Flag to track backtracking
    bool backtracked = false;

    // Solve N-Queen problem starting from the first column
    if (solveNQueensUtil(board, 0, N, backtracked)) {
        cout << "Solution exists:" << endl;
        displayBoard(board, N);
    } else {
        cout << "Solution does not exist for " << N << "-Queens problem." << endl;
    }
}

int main() {
    solveNQueens();
    return 0;
}
