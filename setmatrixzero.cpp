#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0;i<n;i++){
        for (int j=0;j<m;j++){
            if (matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            if (row[i]||col[j]){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main() {
    int n, m;
    
    // Prompt the user for matrix dimensions
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    // Create a matrix from user input
    vector<vector<int>> matrix(n, vector<int>(m));

    // Read the matrix values from the user
    cout << "Enter the matrix elements row by row:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Apply the zeroMatrix function
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    // Output the resulting matrix
    cout << "The final matrix is:" << endl;
    for (const auto& row : ans) {
        for (int ele : row) {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}