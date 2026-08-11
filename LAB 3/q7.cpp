#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows (m) and columns (n): ";
    cin >> m >> n;
    
    if (m <= 0 || n <= 0) {
        cout << "Invalid dimensions." << endl;
        return 1;
    }
    
    int** matrix = new int*[m];
    for (int i = 0; i < m; ++i) {
        matrix[i] = new int[n];
    }
    
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nThe matrix is:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < m; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
    
    return 0;
}
