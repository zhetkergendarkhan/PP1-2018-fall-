#include<iostream>
using namespace std;
int main()
{
	int n,max=-500500,second=-500500;
	cin>>n;
	int arr[n][n];
for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		cin>>arr[i][j];
	
	if(arr[i][j]>max){
		second=max;
		max=arr[i][j];
	}	
			else if(arr[i][j]>second && arr[i][j]!=max)
				second=arr[i][j];
				
	}
	if(second==-500500) cout<<0;
	else
		cout<<second<<endl;
	return 0;
}