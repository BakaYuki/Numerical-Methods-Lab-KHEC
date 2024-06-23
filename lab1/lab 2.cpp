#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) ((x*log10(x)) - 1.2)
#define E 0.0001
using namespace std;
//float f(float x){
//	return((x*log10(x))-1.2);
//}


int main()
{
	float x1,x2,f1,f2,x0,f0;
	cout<<"Enter the initial guesses\n";
	cout<<"Enter the value of x1\n";
	cin>>x1;
	cout<<"Enter the value of x2\n";
	cin>>x2;
	
	f1 = f(x1);
	f2 = f(x2);
	
	cout<<f1;
	
	getch();
	return 0;
}
