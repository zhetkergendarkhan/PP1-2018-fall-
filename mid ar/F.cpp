#include<iostream>
using namespace std;
int main(){
	int a, b,c,d;
	cin>>a>>b;
	cin>>c>>d;
	if(a>c && b<d )
		cout<<"NO";
	
	else if(a==c && d==b)
		cout<<"NO";
	
	else if(a==c && b>d)
		cout<<"YES";
	
	return 0;
}