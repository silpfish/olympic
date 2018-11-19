#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define pi 3.1415926
using namespace std;
int main()
{
    int n,a,b,c;
    int gold=0,silver=0,bronze=0,all=0;
    cin>>n;
    for (int i=0;i<n;i++)
	{
        cin>>a>>b>>c;
        gold+=a;
        silver+=b;
        bronze+=c;
    }
    all=gold+silver+bronze;
    cout<<gold<<" "<<silver<<" "<<bronze<<" "<<all<<endl;
    return 0;
}
