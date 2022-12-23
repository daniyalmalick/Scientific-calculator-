#include<iostream>
#include<cmath>
using namespace std;
	int sum(int a,int b)
	{
		return (a+b);
		}
	int sub(int a,int b)
	{
		return (a-b);
	}
		int mul(int a,int b)
	{
		return (a*b);
	}
		float div(float a,float b)
	{
		return (a/b);
	}
		int rem(int a,int b)
	{
		return (a&b);
	}
	float sqrt(float a,float b)
	{
		return sqrt(a);
	}
	float sqrt1(float b)
	{
		return sqrt(b);
	}
		float log(float a,float b)
	{
		return log(a);
	}
	int main()
	{
	float a,b,num;
	cout<<"Enter the first number"<<endl;
	cin>>a;
	cout<<"Enter the second number"<<endl;
	cin>>b;
	num=sum(a,b);
	cout<<"The addition of two number is"<<endl;
	cout<<num<<endl;
	num=sub(a,b);
	cout<<"The Subtraction of two number is"<<endl;
	cout<<num<<endl;
	num=mul(a,b);
	cout<<"The Multiplication of two number is"<<endl;
	cout<<num<<endl;
	num=div(a,b);
	cout<<"The Division of two number is"<<endl;
	cout<<num<<endl;
	num=rem(a,b);
	cout<<"The Remainder of two number is"<<endl;
	cout<<num<<endl;
	num=sqrt(a);
	cout<<"The square of first number is"<<endl;
	cout<<num<<endl;
	num=sqrt1(b);
	cout<<"The square of second number is"<<endl;
	cout<<num<<endl;
	num=log(a);
	cout<<"The log of first number is"<<endl;
	cout<<num<<endl;
	num=log(b);
	cout<<"The log of second  number is"<<endl;
	cout<<num<<endl;
}
