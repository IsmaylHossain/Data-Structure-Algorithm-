#include <iostream>
#include <vector>
using namespace std;

bool isSquare(const vector<string> &grid, int n) {
    int minRow = n, maxRow = -1, minCol = n, maxCol = -1;

     for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '1') {
                minRow = min(minRow, i);
                maxRow = max(maxRow, i);
                minCol = min(minCol, j);
                maxCol = max(maxCol, j);
            }
        }
    }

     return (maxRow - minRow + 1 == maxCol - minCol + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        if (isSquare(grid, n)) {
            cout << "SQUARE\n";
        } else {
            cout << "TRIANGLE\n";
        }
    }

    return 0;
}
