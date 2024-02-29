#include <iostream>
using namespace std;

// Function to check if a cell needs to be flipped
bool needs_flip(char grid[][7], int i, int j) {
    if (grid[i][j] == 'B') {
        int count_black_neighbors = 0;
        if (i > 0 && j > 0 && grid[i - 1][j - 1] == 'B') count_black_neighbors++;
        if (i > 0 && j < 6 && grid[i - 1][j + 1] == 'B') count_black_neighbors++;
        if (i < 6 && j > 0 && grid[i + 1][j - 1] == 'B') count_black_neighbors++;
        if (i < 6 && j < 6 && grid[i + 1][j + 1] == 'B') count_black_neighbors++;
        if (count_black_neighbors == 4) return true;
    }
    return false;
}

// Function to count the minimum number of operations required
int min_operations(char grid[][7]) {
    int operations = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (needs_flip(grid, i, j)) operations++;
        }
    }
    return operations;
}

int main() {
    int t;
    cin >> t; // Input the number of test cases

    // Iterate through each test case
    while (t--) {
        char grid[7][7];

        // Input the grid
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++) {
                cin >> grid[i][j];
            }
        }

        // Output the minimum number of operations required for the current test case
        cout << min_operations(grid) << endl;
    }

    return 0;
}
