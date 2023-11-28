#include <stdio.h>
#include <time.h>

#define M 3

double gettime() {
        struct timespec t;
        timespec_get(&t, TIME_UTC);
        unsigned long tvsec = t.tv_sec;
        unsigned long tvnsec = t.tv_nsec;
        return tvsec + 1e-9 * tvnsec;
}

void read_mat(char* filename, float A[M][M]) {

}

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
    float A[M][M];
    float B[M][M];
    float C[M][M];


    printf("Matrix A: \n");
    print_mat(A);

    printf("Matrix B: \n");
    print_mat(B);

    double t1 = gettime();
    // Declare a matrix C and use it for multiplication
    matmul(A, B, C);
    double t2 = gettime();
    printf("Matrix C: \n");
    print_mat(C);

    printf("Time taken: %8.4g milliseconds\n", (t2-t1)*1000);
}