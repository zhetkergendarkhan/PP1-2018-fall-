#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	for(int i=0;i<n;i++)
	if(x.find(arr[i]) != int::npos)
		cout<<"Yes";
	else 
		cout<<"No";
	return 0;
}