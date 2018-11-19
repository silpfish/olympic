#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
	int max,min,total,times;
	cin>>min>>max;
	for(times=min;times<=max;times++)
	{
		if(times%17==0)
			total+=times;
    }
    cout<<total;
	return 0;
}
