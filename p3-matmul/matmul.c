#include <stdio.h>

#define M 3

float A[M][M] = {{1.0, 2.0, 3.0},
                 {4.0, 5.0, 6.0},
                 {7.0, 8.0, 9.0}};
float B[M][M] = {{1.0, 2.0, 3.0},
                 {4.0, 5.0, 6.0},
                 {7.0, 8.0, 9.0}};

void matmul(float A[M][M], float B[M][M], float C[M][M]) {

}

/**
 * @brief print a Matrix in rows and columns
 * 
 * @param A: 2-D matrix
 * 
 * Print the matrix out so that each row is on one line.  Example:
 * A[0][0] A[0][1] A[0][2]
 * A[1][0] A[1][1] ... etc.
 */
void print_mat(float A[M][M]) {

}

int main() {
    printf("Matrix A: \n");
    print_mat(A);

    printf("Matrix B: \n");
    print_mat(B);

    // Declare a matrix C and use it for multiplication
    matmul(A, B, C);
    printf("Matrix C: \n");
    print_mat(C);
}