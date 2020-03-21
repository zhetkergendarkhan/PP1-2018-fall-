#include<iostream>
using namespace std;
int product(int a , int n){
	if(n==0)
		return 0;
	return a + product(a,n-1);
}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<product(a,n);
	return 0;
}