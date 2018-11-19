#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int date;
	cin>>date;
	if(date==1||date==3||date==5) cout<<"NO";
	else cout<<"YES";
	return 0;
}
