#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a%3==0)
		cout<<"Yes";
	else if(a%3!=0 && (a+b)%3==0)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}