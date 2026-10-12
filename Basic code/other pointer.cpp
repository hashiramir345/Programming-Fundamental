#include<iostream>
using namespace std;
int main()
{
	int n;
	int *P=&n;
	int **q=&P;
	int ***w=&q;
	cout<<"vls of n=";
	cin>>n;
	cout<<n<<" "<<P<<" "<<*P<<" "<<q<<" "<<**q<<" "<<w<<" "<<***w;
	return 0;
}
