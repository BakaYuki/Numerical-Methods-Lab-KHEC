#include <stdio.h>

#define N 3

void gaussElimination(float matrix[N][N+1]) {
    int i, j, k;
    float factor, temp;

    for (i = 0; i < N - 1; i++) {
        if (matrix[i][i] == 0) {
            printf("Pivot element is zero. Gauss elimination failed.\n");
            return;
        }

        for (j = i + 1; j < N; j++) {
            factor = matrix[j][i] / matrix[i][i];

            for (k = i; k < N + 1; k++) {
                matrix[j][k] -= factor * matrix[i][k];
            }
        }
    }

    for (i = N - 1; i >= 0; i--) {
        temp = matrix[i][N];

        for (j = i + 1; j < N; j++) {
            temp -= matrix[i][j] * matrix[j][N];
        }

        matrix[i][N] = temp / matrix[i][i];
    }

    printf("Solution:\n");
    for (i = 0; i < N; i++) {
        printf("x%d = %.2f\n", i + 1, matrix[i][N]);
    }
}

int main() {
    float matrix[N][N+1];

    printf("Enter the augmented matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + 1; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    gaussElimination(matrix);

    return 0;
}