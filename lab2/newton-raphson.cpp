#include <stdio.h>
#include <math.h>

double funct(double x){
    return x*x - 4 * x - 10;
}

double dfunct(double x){
    return 2 * x - 4;
}

int main(){
    double x0 = 9; // initial guess
    double e = 0.0001;
    double x1;
    int count = 1;
    printf("Steps\t\tx0\t\tx1\n");
    here:
    x1 = x0 - funct(x0) / dfunct(x0);
    if( funct(x1)<e){
        printf("The root is: %lf\n", x1);
    }
    else{
        printf("%d\t\t%lf\t%lf\n", count++, x0, x1);
        x0 = x1;
        goto here;
    }
}