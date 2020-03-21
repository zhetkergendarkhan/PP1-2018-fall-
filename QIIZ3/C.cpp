#include<iostream>
#include<string>
using namespace std;
 string pol(string s,int i,int j){
if(i>j)
	return "YES";
if(s[i]!=s[j])
	return "NO";

	return pol(s,i+1,j-1);
 }
 int main(){
 	string a;
 	cin>>a;
 	int i=0,j=a.size()-1;
 	cout<<pol(a,i,j);
 	return 0;
 }