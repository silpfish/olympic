#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int c,n[101],t1,t5,t10;
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>n[i];
		if(n[i]==1) t1++;
		if(n[i]==5) t5++;
		if(n[i]==10) t10++;
	}
	cout<<t1<<endl<<t5<<endl<<t10;
	return 0;
}
