#include<iostream>
using namespace std;
int main()
{
	int k=7,m=1;
	for(int i=0;i<=4;i++)
	{
		k--;
		m++;
		for(int j=0;j<=k&&j<=m;j++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
}
