#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	double x;
	cin>>x;
	if(0<=x<5) printf("%.3lf",2.5-x);
	else if(5<=x<10) printf("%.3lf",2-1.5*pow(x-3,2));
	else if(10<=x<20) printf("%.3lf",x/2-1.5);
	return 0;
}
