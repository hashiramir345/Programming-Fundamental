#include<iostream>
using namespace std;
int main()
{
	int i,j,k=0,m=6;
	for(i=1;i<=4;i++)
	{
		k++;
		m--;
		for(j=1;j<=9;j++)
	{
	   if(j<=k&&j>=m)
	   cout<<"*";
	   else
	   cout<<" ";	
	}
	cout<<endl;
	}
	return 0;
}
