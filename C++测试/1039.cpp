#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
    long long int a;
	cin>>a;
	if(a>0)
	{
		cout<<"positive"<<endl; 
	}
	else if(a<0)
	{
		cout<<"negative"<<endl;
	}
	else
	{
		cout<<"zero"<<endl;
	}
	return 0;
}
