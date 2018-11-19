#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int w,m;
	char e;
	cin>>w>>e;
	if(w<=1000) m=8;
	else if((w-1000)%500==0) m=(w-1000)/500*4+8;
	else if((w-1000)%500>0) m=(w-1000)/500*4+4+8;
	if(e=='y') m=m+5;
	cout<<m;
	return 0;
}
