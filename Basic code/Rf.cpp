#include<iostream>
using namespace std;
int reverse(int n,int rev)
{
	if (n!=0){
		return reverse(n/10,rev*10+n%10);
	}
	else
	{
		return rev;
	}
}
int main()
{
	int x, rev=0;
	cout<<"Enter any number to print its reverse:";
	cin>>x;
	cout<<"Reverse of "<<x<<"="<<reverse(x,rev);
	return 0;
}
