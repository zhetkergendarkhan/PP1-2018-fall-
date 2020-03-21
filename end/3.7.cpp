#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int min=500500;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if((arr[i]+arr[i+1])<min)
			min=arr[i]+arr[i+1];
	}
	cout<<min<<endl;
	return 0;
}