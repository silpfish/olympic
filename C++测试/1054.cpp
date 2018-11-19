#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((c-a)<=b&&b<=(a+c)) cout<<"yes";
	else cout<<"no";
	return 0;
}
