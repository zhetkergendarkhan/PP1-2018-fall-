#include <iostream>
using namespace std;
int main () {
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b || a==c || b==c)
		cout<<"YES"<<endl;
	
	if (a!=b && a!=c && b!=c)
		cout<<"NO"<<endl;
	
	

	return 0;
}