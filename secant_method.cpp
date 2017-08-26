#include<iostream>
#include<cmath>
using namespace std;
float fun(float x)
{
	return (x*x)-(4*x)-10;
}
int main()
{
	float x1,x2,x3,f1,f2,e=0.0001;
	x1=4;
	x2=2;
	f1=fun(x1);
	f2=fun(x2);
	while(1)
	{
		
		x3=((f2*x1)-(f1*x2))/(f2-f1);
		if(abs((x3-x2)/x3)>e)
		{
			cout<<x3<<endl;
			x1=x2;
			f1=f2;
			x2=x3;
			f2=fun(x3);
			continue;
		}
		else
		{
			cout<<"root"<<x3<<endl;
			break;
		}
	}
	
	
	return 0;
}
