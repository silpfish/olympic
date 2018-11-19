#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	double s[100],a;
	int n,c;
	cin>>n;
	c=n;
	while(c>0)
	{ 
	cin>>s[c];
	a=a+s[c];
	c--;
	}
	a=a/n;
	printf("%.4lf",a);
	return 0;
}
