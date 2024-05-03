#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> rows1 >> cols1;

    // Input dimensions of the second matrix
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> rows2 >> cols2;

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        cout << "Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication." << endl;
        return 1; // Exit program with error
    }

    // Input elements of the first matrix
    cout << "Enter the elements of the first matrix:" << endl;
    vector<vector<int>> matrix1(rows1, vector<int>(cols1));
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cout << "Element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter the elements of the second matrix:" << endl;
    vector<vector<int>> matrix2(rows2, vector<int>(cols2));
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << "Element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix multiplication
    vector<vector<int>> result(rows1, vector<int>(cols2, 0));
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the resulting matrix
    cout << "Resulting matrix after multiplication:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
