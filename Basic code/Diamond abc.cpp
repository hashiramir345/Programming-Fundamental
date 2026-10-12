#include<iostream>
using namespace std;
int main()
{
	int i,j,k=4,m=2;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		if(i<=3)
		{
			k--;
			m++;
		}
		else
		{
			k++;
			m--;
		}
		for(j=1;j<=5;j++)
		{
			if(j>=k&&j<=m)
			{
				cout<<ch;
				ch++;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;		
	}
	return 0;
}
