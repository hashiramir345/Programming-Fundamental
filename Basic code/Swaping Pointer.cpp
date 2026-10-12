#include<iostream>
using namespace std;
void swap(int ***s,int *p)
{
	int temp;
	temp=***s;
	***s=*p;
	*p=temp;
}
int main()
{
	int x=10,y=20,*p,**P,***o,*yt;
	p=&x;
	P=&p;
	o=&P;
	yt=&y;
		cout<<"Before SWapping\n";
	cout<<"Value of x= "<<***o<<endl;
	cout<<"Value of y="<<*yt<<endl;
	swap(o,yt);
	cout<<"After SWapping\n";
	cout<<"Value of x= "<<***o<<endl;
	cout<<"Value of y="<<*yt<<endl;
	return 0;
	
	
}
