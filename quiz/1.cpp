#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int z;
	if(n%2==0 && n%5==0)
		z=z+1;
	if(n%2==0 && n%17==0)
		z=z+1;
	if(n%2==0 && n%19==0)
	if (z>0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
		
	
	return 0;
}