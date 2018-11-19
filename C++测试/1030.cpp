#include<iostream>
#include<cstdio>
#include<cmath>
#define pi 3.14
using namespace std;
int main()
{
	double r,v;
	cin>>r;
	v=(pi*pow(r,3))*4/3;
	printf("%.2lf",v);
	return 0;
}
