#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	double s[10000],a;
	int n,c,h;
	cin>>n;
	c=n;
	while(c>0)
	{ 
	cin>>s[c];
	a=a+s[c];
	h=a;
	c--;
	}
	a=a/n;
	printf("%d %.5lf",h,a);
	return 0;
}
