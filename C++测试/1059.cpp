#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	double y[100],a;
	int n,c;
	cin>>n;
	c=n;
	while(c>0)
	{ 
	cin>>y[c];
	a=a+y[c];
	c--;
	}
	a=a/n;
	printf("%.2lf",a);
	return 0;
} 
