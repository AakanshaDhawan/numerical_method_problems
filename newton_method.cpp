#include<iostream>
#include <cmath> 
using namespace std;
float fu(float x)
{
	return (x*x)+x-2;
}
float df(float x)
{
	return (2*x)+1;
}
int main()
{
	float x0=-1,f0,df0,x1,e=0.000001,a=0,h;
	f0=fu(x0);
		df0=df(x0);
	h=f0/df0;
	cout<<h<<endl;
	while(abs(h)>=e)
	{
		
		f0=fu(x0);
		df0=df(x0);
		h=f0/df0;
		x1=x0-h;
		x0=x1;
		//a=(x1-x0)/x1;
		cout<<x1<<"   "<<++a<<endl;
	}
    cout<<x0;
	return 0;
}
