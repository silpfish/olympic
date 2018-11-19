#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	double x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cout<<fixed<<setprecision(2)<<((y1+y2)*(x1-x2)+(y2+y3)*(x2-x3)+(y1+y3)*(x1-x3))/2;
	return 0;
}
