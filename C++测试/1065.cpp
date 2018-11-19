#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int max,min,total,times;
	cin>>min>>max;
	if(min%2==0) min++;
	if(max%2==0) max--;
	times=(max-min)/2;
	for(int i=0;i<=times;i++)
	{
		total+=min+i*2;
	}
	cout<<total;
	return 0;
} 
