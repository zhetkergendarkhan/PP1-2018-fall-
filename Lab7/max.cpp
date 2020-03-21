#include<iostream>
#include<cmath>
using namespace std;
 int ma(string s,int i,char ax){
 	if(s.size()==i)
 		return ax;
 	ax=max(ax,s[i]);
 	return ma(s,i+1,ax);
 }
 int main(){
 	string s;
 	cin>>s;
 	cout<<char(ma(s,0,'0'));
 	return 0;
 }