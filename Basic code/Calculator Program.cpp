#include<iostream>
using namespace std;
int main()
{
	float a,b,sum,mul,sub,div,rem;
	cout<<"for Addition.";
	cout<<"\nEnter two Numbers=";
	cin>>a>>b;
	sum=a+b;
	cout<<"Sum="<<sum;
	cout<<"\nfor Subtraction.";
	cout<<"\nEnter two Numbers=";
	cin>>a>>b;
	sub=a-b;
	cout<<"sub="<<sub;
	cout<<"\nfor Multiplication.";
	cout<<"\nEnter two Numbers=";
	cin>>a>>b;
	mul=a*b;
	cout<<"mul="<<mul;
	cout<<"\nfor Division.";
	cout<<"\nEnter two Numbers=";
	cin>>a>>b;
	div=a/b;
	cout<<"div="<<div;
	cout<<"\n for Remainder.";
	cout<<"\nEnter two Numbers=";
	cin>>a>>b;
	rem=(int)a%(int)b;
	cout<<"rem="<<rem;
	
	return 0;
}
