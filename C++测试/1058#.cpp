#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	/*
	��ʼ������ 
	*/ 
    double a,b,c,x1,x2,delta;    //����abc�������������̵Ľ�x1��x2���б�ʽDELTA��˫���㣩 
	cin>>a>>b>>c;   //���볣�� 
	/*
	�б𲿷� 
	*/ 
	delta=pow(b,2)-4*a*c;     //�б�ʽ�Ķ��� 
	if(delta<0)     //�б�����ʵ�� 
	{
		cout<<"No answer!";
		return 0;
	} 
	/*
	�ⷽ�̲��� 
	*/
	x1=(0-b-sqrt(delta))/(2*a);   //���巽�̵Ľ�x1 
	x2=(0-b+sqrt(delta))/(2*a);   //���巽�̵Ľ�x2
	if(x1>x2)   //�����С����ǰԭ�� 
	{
		printf("x1=%.5lf;x2=%.5lf",x2,x1);
		return 0;
	}
	if(x1<x2)   //�����С����ǰԭ��
	{
		printf("x1=%.5lf;x2=%.5lf",x1,x2);
		return 0;
	}
	printf("x1=x2=%.5lf",x1);   //���һ����������ж���ǰ����ɸѡ���ã� 
	return 0;
}
//BY MR.WU 
