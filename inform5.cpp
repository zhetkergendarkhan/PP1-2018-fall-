#include<iostream>
using namespace std;
int main()
{
	string s;
	int cnt;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]=='')
			cnt++;
	}
		cout<<cnt+1;
		return 0;

}