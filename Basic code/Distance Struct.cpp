#include<iostream>
using namespace std;
struct Distance{
	int feet;
	float inches;
};
int main()
{
	Distance d1,d2,d3;
	cout<<"Enter 1st Distance\n";
	cout<<"Enter feet of 1st distance.";
	cin>>d1.feet;
		cout<<"Enter inches of 1st distance.";
	cin>>d1.inches;
		cout<<"Enter feet of 2nd distance.";
	cin>>d2.feet;
		cout<<"Enter inches of 2nd distance.";
	cin>>d1.inches;
	d3.feet=d1.feet+d2.feet;
		d3.inches=d1.inches+d2.inches;
		while(d3.inches>=12)
		{
			d3.feet++;
			d3.inches-=12;
		}
		cout<<"Total feet="<<d3.feet<<endl;
		cout<<"Total inches="<<d3.inches<<endl;
		return 0;
}
