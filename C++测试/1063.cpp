#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int n[1001],max,min,s;
	cin>>s;
	n[0]=0;
	min=n[0];
	for(int i=0;i<s;i++)
	{
		cin>>n[i];
		if(n[i]>=n[i-1]) max=n[i];
		else if(n[i-1]<min) min=n[i-1]; 
	}
	cout<<max-min;
	return 0;
} 
