#include<iostream>
using namespace std;
int main(){
	  int n;
	  int cnt=0;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++){
	  	cin>>a[i];
	  }
	  int x;
	  cin>>x;
	  for(int i=0;i<n;i++){
	  if(x<a[i])
	  	cnt++;
	}
	  cout<<cnt<<endl;
	  return 0;
}