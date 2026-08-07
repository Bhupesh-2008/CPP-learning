#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Create an array of int pointers (each row is a pointer to int)
    int** jagged = new int*[rows];
    int* colSizes = new int[rows]; // store number of columns for each row

    // Input each row with different column sizes
    for (int i = 0; i < rows; i++) {
        int cols;
        cout << "Enter number of columns for row " << i + 1 << ": ";
        cin >> cols;

        colSizes[i] = cols; // save column size
        jagged[i] = new int[cols]; // Allocate memory for this row

        cout << "Enter " << cols << " elements: ";
        for (int j = 0; j < cols; j++) {
            cin >> jagged[i][j];
        }
    }

    // Display the jagged array
    cout << "\nJagged Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colSizes[i]; j++) {
            cout << jagged[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] jagged[i];
    }
    delete[] jagged;
    delete[] colSizes;

    return 0;
}