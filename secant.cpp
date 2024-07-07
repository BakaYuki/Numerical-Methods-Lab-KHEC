#include <stdio.h>

int main(){
    int x[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", x[i]); // This will print the elements of the array x
    }

    float y[2] = {1, 2};
    printf("\n%f %f\n", y[0], y[1]); // This will print the elements of the array y
}
