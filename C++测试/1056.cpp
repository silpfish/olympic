#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if(x<=1&&x>=-1) goto a;
	else cout<<"no";
	return 0;
	a:
	if(y<=1&&y>=-1) cout<<"yes";
	else cout<<"no";
	return 0;	
}
