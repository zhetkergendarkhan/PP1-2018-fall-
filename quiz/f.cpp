#include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[500500];
	for(int i=0;i<n;++i){
		cin>>a[i];

	}
	for(int i=0;i<n;++i){
		if(a[i]!=a[i-1])
			cout<<a[i-1]<<endl;
	}
	return 0;
}