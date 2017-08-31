// Diagonal Difference
// URL: https://www.hackerrank.com/challenges/diagonal-difference
// See URL for in depth explanation.

#include <cmath>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

typedef vector<vector<int>> Matrix;

Matrix initMatrix(int dimensions) {
    Matrix newMatrix;
    vector<int> temp;

    for (int i = 0; i < dimensions; ++i) {
        for (int j = 0; j < dimensions; ++j) {
            temp.push_back((rand() % 9) + 1);
        }
        newMatrix.push_back(temp);
        temp.clear();
    }

    return newMatrix;
}

void printMatrix(Matrix inMatrix) {
    for (int row = 0; row < inMatrix.size(); ++row) {
        for (int col = 0; col < inMatrix[0].size(); ++col) {
            cout << inMatrix[row][col] << " ";
        }
        cout << endl;
    }

}

int main(){
    Matrix myMatrix;
    int dimensions;

    cout << "Enter Dimensions: ";
    cin >> dimensions;

    myMatrix = initMatrix(dimensions);

    printMatrix(myMatrix);

    return 0;
}