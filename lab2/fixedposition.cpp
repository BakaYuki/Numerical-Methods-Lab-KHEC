#include <stdio.h>
#include <math.h>

double funct(double x){
    return (cos(x)+1)/3 ;
}

int main(){
    double x0 = 5; // initial guess 
    double e = 0.001;
    double x1;
    int count = 1;
    printf("Steps\tx0\t\tx1\n");
    here:
    x1 = funct(x0);

    if ( fabs(x1 - x0 )<e){
        printf("The root is %.6f found at iteration %d\n", x1, count);
    }
    else{
        printf("%d\t%lf\t%lf\n", count++, x0, x1);
        x0 = x1;
        goto here;
    }
}