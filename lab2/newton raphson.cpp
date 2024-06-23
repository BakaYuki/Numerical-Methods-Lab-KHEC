#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#define f(x) (x*x - 4*x -10)
#define df(x) (2 * x - 4) 
#define e 0.0001
using namespace std;

int main()
{
	float x1,x2,x0,f1,f2,f0,i=0;
	
	cout<<"Enter the initial guess \n";
	cout<<"Enter the value of x0:\n";
	cin>>x0;
	cout<<"n\t x0\t x1\t f(x0)\t\t f(x1)\n";
	
	step:
	i++;
	f1 = f(x0);
	f2 = df(x0); 
	
	x1 = x0 - (f1/f2);
	cout<<i<<"\t"<<setprecision(4)<<x0<<"\t"<<x1<<"\t"<<f1<<"\t\t"<<f2<<endl;
	
	if(fabs((x1-x0)/x1) <= e)
	{
		cout<<"The approximate root is:\t"<<x1;
		goto exit;
	}
	
	else
	{
		x0 = x1;
//		f1 = f0;
		goto step;
	}
	
	
	exit:
	getch();
	return 0;
}