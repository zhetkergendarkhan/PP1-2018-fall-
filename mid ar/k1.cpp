#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	
	if(arr[i]<0)
		arr[i]*(-1);
	}
	cout<<arr;
	return 0;

}