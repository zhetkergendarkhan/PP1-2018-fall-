#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	if(a%2==0 && b%2!=0) return 1;
	if(a%2==0 &&b%2==0 && a>=b) return 1;
	if(a%2!=0 && b%2!=0 && a<=b) return 1;
	return 0;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

}