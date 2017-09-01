
// Diagonal Difference
// URL: https://www.hackerrank.com/challenges/diagonal-difference

#include <cmath>
#include <vector>
#include <cstdlib>
#include <iostream>

typedef std::vector<std::vector<int>> Matrix;

int getDimensions() {
    int input;
    std::cout << "\nEnter Dimensions: ";
    std::cin >> input;
    std::cout << std::endl;
    return input;
}

Matrix initMatrix(int dimensions) {
    Matrix newMatrix;
    std::vector<int> temp;

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
            std::cout << inMatrix[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

int getLeftDiagonal(Matrix myMatrix) {
    int sum = 0;
    int position = 0;

    for (int i = 0; i < myMatrix.size(); ++i) {
        sum += myMatrix[i][position];
        position++;
    }

    return sum;
}

int getRightDiagonal(Matrix myMatrix) {
    int sum = 0;
    unsigned long position = myMatrix.size() - 1;

    for (int i = 0; i < myMatrix.size(); ++i) {
        sum += myMatrix[i][position];
        position--;
    }

    return sum;
}

int getDifference(Matrix myMatrix) {
    int leftDiagonal = getLeftDiagonal(myMatrix);
    int rightDiagonal = getRightDiagonal(myMatrix);
    return abs(leftDiagonal - rightDiagonal);
}

int main(){
    int dimensions = getDimensions();
    Matrix myMatrix = initMatrix(dimensions);

    printMatrix(myMatrix);

    std::cout << "\nLeft Diagonal: " << getLeftDiagonal(myMatrix) << std::endl;
    std::cout << "Right Diagonal: " << getRightDiagonal(myMatrix) << std::endl;
    std::cout << "Absolute Difference: " << getDifference(myMatrix) << std::endl;

    return 0;
}