#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int min=100100;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]<min)
			min=arr[i];
	}
	cout<<min<<endl;
	return 0;
}