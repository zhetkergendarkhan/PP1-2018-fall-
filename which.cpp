#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	if (n>k){
		cout<<"1"<<endl;
	}else if (k>n){
		cout<<"2"<<endl;
	}else if (n==k){
		cout<<"0"<<endl;
		return 0;
	}
}