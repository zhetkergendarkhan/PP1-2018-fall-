#include<iostream>
using namespace std;
 long long inf(long long sum){
 	int s;
 	cin>>s;
 	sum+=s;
 	if(s==0)
 		return sum;
 	return inf(sum);
 } 
 int main(){
 	cout<<inf(0);
 	return 0;
 }