#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int max=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(arr[i]>max)
		arr[i]=max;
	cout<<max<<endl;
	return 0;
}