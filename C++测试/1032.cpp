#include<iostream>
#include<cstdio>
#include<cmath>
#define pi 3.1415926
using namespace std;
int main()
{
	int h,r,c;
	double v;
	cin>>h>>r;
	v=pi*pow(r,2)*h;
	c=int(20000/v)+1;
	cout<<c;
	return 0;
}
