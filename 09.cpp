#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[500500];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;++i){ 
		if(a[i]%2==0)
			cout<<a[i]<<" "<<endl;
	} 
	return 0;
}