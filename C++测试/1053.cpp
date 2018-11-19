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
	if(a>b&&a>c) cout<<a;
	else if(c>a) cout<<c;
	else cout<<b;
	return 0;
}
