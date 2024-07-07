#include <stdio.h>
#include <math.h>

double f(double x){
    return x*x - 4 * x - 10;
}

int main(){
    double x1 = -2, x2 = -1, e = 0.0001,x0;
    double fx0,fx1,fx2;
    int count = 1;
    if ((f(x1) * f(x2)) >= 0) {
        printf("You have not assumed the right initial points.\n");
        return -1;
    }
    printf("Steps\t\tx1\t\tx2\t\tx0\n");
    here:
    fx1 = f(x1);
    fx2 = f(x2);

    x0 = x1 - ( (fx1* ( x2-x1 ))/ (fx2-fx1));
    fx0 = f(x0);    

    if ((fabs(fx0))< e){
//        printf("\nI am here %lf\n",fx0);

        printf("%d\t\t%lf\t%lf\t%lf\n",count,x1,x2,x0);
        printf("The root is %lf",x0);
        return 0;
    }
    if ( fx0*fx1 <0){
        x2 = x0;
    }
    else{
        x1 = x0;
    }

//    printf("\nI am here %lf\n",fx0);
    printf("%d\t\t%lf\t%lf\t%lf\n",count,x1,x2,x0);
    count++;
    goto here;
}