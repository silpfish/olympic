#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,r;
	int k;
	cin>>a>>b;
	k=int(a/b);
	r=a-k*b;
	cout<<r;
	return 0;
}
