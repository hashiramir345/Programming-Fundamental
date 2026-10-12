#include<iostream>
using namespace std;
class Employee
{
	protected:
		int empid;
		char empname[30];

	public:
	  void input()
	  {
	  	cout<<"Enter employees id=";
	  	cin>>empid;
	  	cout<<"Enter Emp name=";
	  	cin>>empname;
			 }  
		void show()
		{
			 cout<<"Employees id:"<<empid<<endl;
			 cout<<"gwdig"<<"/t"<<empname;
		  
		}
			  	
};
class Manager:public Employee
{
	private:
		int Depid;
		char mname;
		public:
		void get()
		{
			cout<<"Enter Department Id:";
			cin>>Depid;
			}
		void showm()
		{
			cout<<"Depart id:"<<Depid<<endl;
				}		
};
int main()
{
	Manager m;
	m.input();
	m.show();
	m.get();
	m.showm();
}
