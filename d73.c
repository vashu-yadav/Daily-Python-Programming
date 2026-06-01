#include <stdbool.h>

bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    
    int m = matrixSize;
    int n = matrixColSize[0];

    // Check all elements except first row and first column
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] != matrix[i-1][j-1]) {
                return false;
            }
        }
    }

    return true;
}