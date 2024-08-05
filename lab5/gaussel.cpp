#include <stdio.h>

#define N 3



int main(){
    float matrix[N][N+1];
    float x[3];
    printf("Enter the augmented matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + 1; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Gauss Elimination to get the upper triangle form
    for (int i = 0; i< N-1; i++){

        for ( int j = i+1; j < N; j++){
            float dividor = matrix[j][i] / matrix[i][i];
            for ( int k = 0;k<=N;k++){
                matrix[j][k] -= dividor * matrix[i][k];
            }
        }
    }
    // Upper Triangle Print:
    for (int i =0;i<N;i++){
        for (int j=0;j<N+1;j++){
            printf("%f  ",matrix[i][j]);
        }
        printf("\n");
    }

    for ( int i = N-1; i >=0;i--){
        float temp = matrix[i][N];

        for (int j = i + 1; j < N; j++) {
            temp -= matrix[i][j] * matrix[j][N];
        }

        matrix[i][N] = temp / matrix[i][i];
    }

    for (int i =0 ; i<N;i++){
        printf("x[%d] = %f\n",i,matrix[i][N]);
    }
}