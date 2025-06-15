#include <iostream>
#include <vector>
using namespace std;

void booleanMatrix(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    int col0 = 0;

    
    for (int i = 0; i < rows; ++i) {
        if (mat[i][0] == 1) col0 = 1;
        for (int j = 1; j < cols; ++j) {
            if (mat[i][j] == 1) {
                mat[i][0] = 1;
                mat[0][j] = 1;
            }
        }
    }

    
    for (int i = rows - 1; i >= 0; --i) {
        for (int j = cols - 1; j >= 1; --j) {
            if (mat[i][0] == 1 || mat[0][j] == 1) {
                mat[i][j] = 1;
            }
        }
        if (col0 == 1) {
            mat[i][0] = 1;
        }
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    };

    booleanMatrix(mat);

    for (auto &row : mat) {
        for (int x : row) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
