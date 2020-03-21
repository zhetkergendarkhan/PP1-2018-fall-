#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s;
	cin>>s;
	char d=s;
		if(islower(s))
			d=toupper(s);
		
		else 
			d=tolower(s);
		cout<<d;
		return 0;
	}