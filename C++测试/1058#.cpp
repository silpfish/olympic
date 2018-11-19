#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	/*
	初始化部分 
	*/ 
    double a,b,c,x1,x2,delta;    //定义abc三个常数，方程的解x1，x2，判别式DELTA（双浮点） 
	cin>>a>>b>>c;   //输入常数 
	/*
	判别部分 
	*/ 
	delta=pow(b,2)-4*a*c;     //判别式的定义 
	if(delta<0)     //判别有无实根 
	{
		cout<<"No answer!";
		return 0;
	} 
	/*
	解方程部分 
	*/
	x1=(0-b-sqrt(delta))/(2*a);   //定义方程的解x1 
	x2=(0-b+sqrt(delta))/(2*a);   //定义方程的解x2
	if(x1>x2)   //满足根小者在前原则 
	{
		printf("x1=%.5lf;x2=%.5lf",x2,x1);
		return 0;
	}
	if(x1<x2)   //满足根小者在前原则
	{
		printf("x1=%.5lf;x2=%.5lf",x1,x2);
		return 0;
	}
	printf("x1=x2=%.5lf",x1);   //最后一种情况无需判定（前面有筛选作用） 
	return 0;
}
//BY MR.WU 
