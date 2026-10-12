#include<iostream>
using namespace std;
int main()
{
	char s[50];
	cout<<"Enter any String To check it to dissces about "<<endl;
	gets(s);
	cout<<s;
	
	int len,f=1;
	for(int i=0;s[i]!='\0';i++)
	{
		len++;
	}
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-1-i])
		f=0;
		break;
	}
	if(f) 
	{
		cout<<"\nString is Palindrome.";
		
	}
	else
	{
		cout<<"\nSting is not";
		
	}
	return 0;
	
	}

