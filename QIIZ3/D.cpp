#include<bits/stdc++.h>
using namespace std;
int i=0;
bool f( string s){
	if(i>(s.length()-1)/2)
		return true;

	
	if(s[i]!=s[s.length()-1-i])
		return false;
	i++;
	return f(s);
	
}
int main(){
	string s;
	cin>>s;
	if(s.length()>10){
		cout<<"NO";
		return 0;

	}

if(f(s)){
	cout<<"NO";
	return 0;
}

	int ans=0;
	for(int j=0;j<s.length();j++){
		if (s[j]>='0' && s[j]<='9' )
			ans++;
		}
		
		if(ans>=3)
			cout<<"YES";
		
		
		else 
			cout<<"NO";
		
	
	return 0;
}