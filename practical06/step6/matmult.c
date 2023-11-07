/* This function performs matrix multiplication given:
 * n, p, and q, the size of the matrix
 * A[n][q], the first matrix
 * B[p][q], the second matrix
 * C[n][q], the matrix to place the multiplication into
*/

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]) {
    int i, j, k; //Loop indices

    // Loop to multiply A and B, place into matrix C
    for (i = 0; i < n; i ++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < p; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

