#include <stdio.h>
#include <math.h>

double f(double x){
    return x*x*x - 2 * x - 5;
}

int main(){
    double x1 = 2, x2 = 3,x3;
    double fx1,fx2,fx3;
    double e = 0.001;
    int count = 1;

    here:
    fx1 = f(x1);
    fx2 = f(x2);
    x3 = (x1* fx2 - fx1*x2)/ (fx2-fx1);
    fx3 = f(x3);
    if (fabs(fx3)<e){
        printf("The root is %lf",x3);
        return 0;
    }
    if ( fx3*fx1 <0){
        x2 = x3;
    }
    else{
        x1 = x3;
    }
    printf("%d\t\t%lf\t%lf\t%lf\n",count,x1,x2,x3);
    count++;
    goto here;

}