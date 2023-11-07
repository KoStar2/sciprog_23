#include <stdio.h>

int main(void) {
    int n = 5,  p = 3, q = 4; //matrix sizes
    int i, j, k; // Loop indices
    double A[n][p], B[p][q], C[n][q]; //Matrices

    // Loop to initialize and print matrix A
    printf("The A matrix is:\n");
    for (i=0;  i<n; i++) {
        for (j=0; j<p; j++) {
            A[i][j] = (double) i + (double) j;
            printf("%3.0f ", A[i][j]);
        }
    printf("\n");
    }

    // Loop to initialize and print matrix B
    printf("The B matrix is:\n");
    for (i=0;  i<p; i++) {
        for (j=0; j<q; j++) {
            B[i][j] = (double) i - (double) j;
            printf("%3.0f ", B[i][j]);
        }
    printf("\n");
    }

    // Loop to set all values in matrix C to 0
    for (i=0;  i<n; i++) {
        for (j=q; j<4; j++) {
            C[i][j] = 0.0l;
        }
    }

    // Perform matrix multiplication
    matmult(n, p, q, A, B, C);

    // Loop to print C
    printf("The matrix C is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q ; j ++) {
            printf("%3.0f ", C[i][j]);
        }
    printf("\n");
    }

    return 0;
}

