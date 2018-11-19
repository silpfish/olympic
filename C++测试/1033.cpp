#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	double x1,x2,y1,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cout<<fixed<<setprecision(3)<<sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return 0;
}
