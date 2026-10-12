#include<iostream>
using namespace std;
int main()
{
	int range, a=0,b=1,c;
	cout<<"Enter the Range for Terms of Fabonaci series.:";
	cin>>range;
	cout<<"Fabonaci series upto"<<range<<"Terms"<<endl;
	for(int i=0;i<range;i++)
{
	if(i<=1)
	{
		c=i;
	}
	else
	{
	   c=a+b;
	    a=b;
	    b=c;
	}
			cout<<c<<" ";
}
return 0;
}
