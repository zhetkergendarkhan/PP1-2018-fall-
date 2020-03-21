#include<iostream>
using namespace std;
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	if((n*x)<y)
		cout<<"No";
	else if((n*x)>y)
		cout<<"Yes";
	else if((n*x)==y)
		cout<<"No difference";
	return 0;
}