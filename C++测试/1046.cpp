#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int a;
	cin>>a;
	if((a%3==0)&&(a%5==0)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
