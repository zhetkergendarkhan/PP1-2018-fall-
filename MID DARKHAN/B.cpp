#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int p;
	p=2*(a+b);
	int s;
	s=a*b;
	if(p>s)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}