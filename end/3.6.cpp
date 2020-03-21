#include<iostream>
using namespace std;
int main(){
	
	int cnt1=0;
	int cnt2=0;
	int cnt3=0;

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			cnt1++;
		}
		if(arr[i]%3==0){
			cnt2++;
		}
		if(arr[i]%4==0){
			cnt3++;
		}
		}
		cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<endl;

return 0;
	
}