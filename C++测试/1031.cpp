#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int a;
	int a1,a2,a3;
	cin>>a;
	a1=a/100;
	a2=a/10-a1*10;
	a3=a-a1*100-a2*10;
	cout<<a3<<a2<<a1;
	return 0;
}

