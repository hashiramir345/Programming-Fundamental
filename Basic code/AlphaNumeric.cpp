#include<iostream>
using namespace std;
void isAlphaNumeric(char *s1)
{
	char *s2;
	s2=s1;
	int f=0;
	for(int i=0;*s1!='\0';i++)
	{
	
		if((*s1>='A'&&*s1<='Z')||(*s1>='a'&&*s1<='z'))
		{
			f=1;
			break;
		}
		s1++;
	}
	s1=s2;
	if(f)
	{
		f=0;
		for(int i=0;*s1!='\0';i++)
		{
			if(*s1>='0'&&*s1<='9')
			{
				f=1;
				break;
			}
			s1++;
		}
	}
	if(f)
	{
		cout<<"AlphaNumeric String.";
	}
	else
	{
		cout<<"Donot AplhaNumeric Stirng.";
	}
};
int main()
{
	char str[30];
	cout<<"Enter any Stirng.:";
	cin>>str;
	isAlphaNumeric(str);
	return 0;
}
