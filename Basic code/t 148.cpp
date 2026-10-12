#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int s=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				cout<<s;
				s++;
			}
		}
		cout<<endl;		
	}
	return 0;
}
