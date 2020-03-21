#include<iostream>
 using namespace std;
   string cheat(int n,int a[],int k,int i){
   	if(i==n-1)
   		return "No";
   	if(a[i]<a[i-1])
   		return "Cheater";
   	return cheat(n,a,k,++i);
   }
   int main(){
   	int n,k;
   	cin>>n>>k;
   	int a[n];
   	for(int i=0;i<n;i++){
   		cin>>a[i];
   	}
   	cout<<cheat(n,a,k,1);
   	return 0;
   }