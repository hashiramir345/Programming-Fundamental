#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	cout<<"Values of Matrix A=";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	} 
	cout<<"Values of Matrix B=";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	
	
	return 0;
}
