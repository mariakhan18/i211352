#include <iostream>

using namespace std;

const int MAX_SIZE = 10; 

void inputMatrix(int A[10][10], int m, int n) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

void displayMatrix(const int A[10][10], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

int sumOfMatrix(const int A[10][10], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void rowWiseSum(const int A[10][10], int m, int n) {
    cout << "Row-wise sum:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void columnWiseSum(const int A[10][10], int m, int n) {
    cout << "Column-wise sum:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void transposeMatrix(const int A[10][10], int m, int n) {
    cout << "Transpose of the matrix:\n";
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int m, n;

    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    if (m > 10 || n > 10) {
        cout << "Error: Maximum matrix size exceeded."<<endl;
        return 1;
    }

    int choice;
    do {
        cout << "Matrix Operations Menu:"<<endl;
        cout << "1. Input elements into matrix"<<endl;
        cout << "2. Display elements of matrix"<<endl;
        cout << "3. Sum of all elements of matrix"<<endl;
        cout << "4. Display row-wise sum of matrix"<<endl;
        cout << "5. Display column-wise sum of matrix"<<endl;
        cout << "6. Create transpose of matrix"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputMatrix(matrix, m, n);
                break;
            case 2:
                displayMatrix(matrix, m, n);
                break;
            case 3:
                cout << "Sum of all elements: " << sumOfMatrix(matrix, m, n) << endl;
                break;
            case 4:
                rowWiseSum(matrix, m, n);
                break;
            case 5:
                columnWiseSum(matrix, m, n);
                break;
            case 6:
                transposeMatrix(matrix, m, n);
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } 
    while (choice != 0);

    return 0;
}