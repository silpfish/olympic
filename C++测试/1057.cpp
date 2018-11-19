#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int a,b;
	char s;
	cin>>a>>b>>s;
	if(s=='+'||s=='-'||s=='/'||s=='*') goto a;
	else
	{
	cout<<"Invalid operator!";
	return 0;
    }
    a:
    if(s=='/'&&b==0) cout<<"Divided by zero!";
    else if(s=='+') cout<<a+b;
    else if(s=='-') cout<<a-b;
    else if(s=='/') cout<<a/b;
    else cout<<a*b;
    return 0;
}
