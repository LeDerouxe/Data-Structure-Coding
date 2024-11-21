#include <iostream>
using namespace std;

bool isUpperTriangular(int matrix[3][3]) {
    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool isLowerTriangular(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool isZeroMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][3];
    cout << "Enter the elements of a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    if (isUpperTriangular(matrix) || isLowerTriangular(matrix) || isZeroMatrix(matrix)) {
        cout << "The matrix is triangular.\n";
    } else {
        cout << "The matrix is not triangular.\n";
    }

    return 0;
}
