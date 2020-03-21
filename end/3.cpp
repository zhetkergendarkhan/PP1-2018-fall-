#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int n;
	cin>>n;
	int max=-235645656;
	int arr[100100];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	for(int i=0;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
		

		}

		cout<<max*x<<endl;

return 0;

}