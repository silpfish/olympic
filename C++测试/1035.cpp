#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int a1,a2,n,an;
	cin>>a1>>a2>>n;
	an=a1*(n-1)*(a2-a1)+1;
	cout<<an;
	return 0;
}
