#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int y;
	cin>>y;
	if(y%4&&y%100&&y%400) cout<<"N";
	else cout<<"Y";
	return 0;	
} 
