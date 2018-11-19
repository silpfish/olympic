#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int d;
	double tf,tb;
	cin>>d;
	tf=d/1.2;
	tb=d/3.0+50;
	if(tf>tb) cout<<"Bike";
	else if(tf<tb) cout<<"Walk"; 
	else cout<<"All";
	return 0;
} 
