#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		m[x]++;
	}

	int ans=0;
	for(map<int,int>::iterator i =m.begin(); i!=m.end();i++){
		if(i->second >=2){
			ans++;
		}
	}
	cout<<ans;
}
