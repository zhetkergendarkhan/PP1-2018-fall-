#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long k=1;
	while(k<=n){
		cout<<k<<" "<<endl;
		k*=2;
	}
	return 0;
}