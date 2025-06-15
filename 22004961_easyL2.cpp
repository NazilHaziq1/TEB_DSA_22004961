/*
id: 22004961
Name: NAZIL
Group : g1
Lab: L2 (Easy) - Efficiently compute sums of diagonals of a matrix
problem: https://geeksforgeeks.org/efficiently-compute-sums-of-diagonals-of-a-matrix/
*/


#include <iostream>
#include <vector>
using namespace std;


pair<int, int> diagonalSums(const vector<vector<int>>& mat) {
    int n = mat.size();
    int sumPrimary = 0, sumSecondary = 0;

    for (int i = 0; i < n; ++i) {
        sumPrimary += mat[i][i];              
        sumSecondary += mat[i][n - 1 - i];     
    }

    return {sumPrimary, sumSecondary};
}

int main() {
    
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {4, 3, 2, 1},
        {7, 8, 9, 6},
        {6, 5, 4, 3}
    };

   
    pair<int, int> result = diagonalSums(matrix);

    
    cout << "Primary Diagonal Sum: " << result.first << endl;
    cout << "Secondary Diagonal Sum: " << result.second << endl;

    return 0;
}
