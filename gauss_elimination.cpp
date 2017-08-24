#include<iostream>
using namespace std;
int main()
{
	float a[4][5],x[4];
	int i,j,k,n=3;
	float u,sum;
	//reading  array a
	for (i=1;i<=n;i++)
  	{
  		for(j=1;j<=n+1;j++)
  		{
	  		cout<<"enter the element"<<i<<"   "<<j<<endl;
	  		cin>>a[i][j];
	  	}
  	}
  	//printing initial array a
  	for (i=1;i<=n;i++)
  	{
  		for(j=1;j<=n+1;j++)
  		{
  			cout<<a[i][j]<<"         ";
		}
		cout<<endl;
	}
	//gauss elimination method
	for(k=1;k<=n-1;k++)
	{
		for(i=k+1;i<=n;i++)
		{
			u=a[i][k]/a[k][k];
            for(j=k;j<=n+1;j++)
			{
				a[i][j]=a[i][j]-(u*a[k][j]);	
			}		
		}
	}
	//Back Substitution method
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		sum=0;
		for(j=i+1;j<=n;j++)
		{
			sum=sum+(a[i][j]*x[j]);
		}
		x[i]=(a[i][n+1]-sum)/a[i][i];
	}
	//printing array a
	for (i=1;i<=n;i++)
  	{
  		for(j=1;j<=n+1;j++)
  		{
  			cout<<a[i][j]<<"         ";
		}
		cout<<endl;
	}
	//printing array x
	for (i=1;i<=n;i++)
  	{
  		cout<<x[i]<<endl;
  	}
  		
}
