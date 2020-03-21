#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,bool>m;
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(!m[s]){
			cout<<"new user added"<<" ";
			m[s]=1;
		}
		else cout<<"user already exists"<<" ";

	}
	
}