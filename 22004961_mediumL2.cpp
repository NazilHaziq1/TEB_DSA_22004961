/*
id: 22004961
name:Nazil
group: g1
lab: L2 (Medium) - Rotate a Matrix by 180 degree
problem: https://geeksforgeeks.org/rotate-matrix-180-degree/
*/

#include <iostream>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

// Rotate the matrix by 180° in-place
void rotate180(vector<vector<int>>& mat) {
    int n = mat.size();

    // Swap corresponding elements
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            swap(mat[i][j], mat[n - i - 1][n - j - 1]);
        }
    }

    // If n is odd, reverse the middle row
    if (n % 2 == 1) {
        int mid = n / 2;
        for (int j = 0; j < n / 2; j++) {
            swap(mat[mid][j], mat[mid][n - 1 - j]);
        }
    }
}

int main() {
    vector<vector<int>> mat = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  0,  1,  2},
        {3,  4,  5,  6}
    };

    cout << "Original matrix:\n";
    for (auto &row : mat) {
        for (int x : row) cout << x << ' ';
        cout << "\n";
    }

    rotate180(mat);

    cout << "\nRotated by 180°:\n";
    for (auto &row : mat) {
        for (int x : row) cout << x << ' ';
        cout << "\n";
    }

    return 0;
}
