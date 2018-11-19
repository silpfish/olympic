#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int n,a[101];
	int i;
	cin>>n;
	a[0]=0;
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
	if(a[i]>a[0])
	a[0]=a[i];
	}
	cout<<a[0]<<endl;
    return 0;
}
