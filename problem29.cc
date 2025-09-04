#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    vector<int> rowSum(rows, 0), colSum(cols, 0);

    // Single loop to calculate row and column sums
    for (int i = 0; i < rows * cols; ++i) {
        int r = i / cols;
        int c = i % cols;
        rowSum[r] += matrix[r][c];
        colSum[c] += matrix[r][c];
    }

    cout << "Sum of each row:\n";
    for (int i = 0; i < rows; ++i)
        cout << "Row " << i + 1 << ": " << rowSum[i] << endl;

    cout << "Sum of each column:\n";
    for (int j = 0; j < cols; ++j)
        cout << "Column " << j + 1 << ": " << colSum[j] << endl;

    return 0;
}