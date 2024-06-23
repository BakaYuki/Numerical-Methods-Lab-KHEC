#include <iostream>
#include <iomanip>
#include <cmath>
// #include <cstdlib>
using namespace std;

float funct(float x){
    return (x*x - 4*x -10);
}

int main(){
    float tolerance,x1,x2,x0;

    setprecision(0);
    printf("Enter the initial guesses x1 and x2");
    scanf("%f%f",&x1,&x2);

    printf("Enter the tolerance");
    scanf("%f",&tolerance);
    float dc = tolerance; 
    int count = 0;// to find the precision for comparison
    while (dc < 1){
        dc = dc * 10;
        count++;
    }
    setprecision(count);
    float fx0,fx1,fx2;
    fx1 = funct(x1);
    fx2 = funct(x2);

    if (fx1*fx2>0){
        printf("Doesnot bracket the root");
        exit(0);
    }

    do{
        x0 = (x1+x2)/2;
        fx0 = funct(x0);
        fx1 = funct(x1);
        fx2 = funct(x2);
        if ((fx0*fx1)< 0) {
            x2 = x0;
        }
        else{
            // printf("second");
            x1 = x0;
        }

    }
    while( ( abs(fx0)) >= tolerance);
    
    // cout<<"fx0:  "<<abs(fx0);
    // printf("%f",(abs(x2-x1)/x2));
    setprecision(count);
    printf("Answer: %f",x0);
}