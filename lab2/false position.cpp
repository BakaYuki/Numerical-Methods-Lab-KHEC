#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) (x*x*x-2*x-5)
#define E 0.0001
#include<iomanip>
using namespace std;
//float f(float x){
//	return((x*log10(x))-1.2);
//}


int main()
{
	float x1,x2,f1,f2,x0,f0,i=1;

	cout<<"Enter the initial guesses\n";
	cout<<"Enter the value of x1\n";
	cin>>x1;
	cout<<"Enter the value of x2\n";
	cin>>x2;
	
	f1 = f(x1);
	f2 = f(x2);
	
//	cout<<f1;

	if((f1*f2)>0)
	{
		cout<<"Root doesnot lies in between x1 and x2\n";
		goto exit;
	}
	
	else
	{
	cout<<"\n n\t x1\t x2\t x0\t f(x1)\t f(x2)\t f(x0)\n ";
	step:
	x0 = x1 - (f1 *(x2-x1)/(f(x2)-f(x1)));
	f0 = f(x0);
	
	if( f1 * f0 < 0)
	{
		x2 = x0;
		f2 = f0;
	}
	
	else 
	{
		x1 = x0;
		f1 = f0;
	}
	
   }
	if(fabs(f0)<E)
	{
		cout<<"\n The approximate root is :"<<x0;
		
	}
	
	else{
		cout<<i<<"\t"<<setprecision(5)<<x1<<"\t"<<x2<<"\t"<<x0<<"\t"<<f1<<"\t"<<f2<<"\t"<<f0<<endl;
		i++;
		goto step;
	}

	
	exit:
	getch();
	return 0;
}
