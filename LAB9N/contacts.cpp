#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,int> m;
	int n;
	cin>>n;
	int cnt=0;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		m[x]++;

	}
	
	for(map<string,int> :: iterator it =m.begin(); it!=m.end();it++){
		if(it->second==3)
			cnt++;
	}
	cout<<cnt<<endl;

return 0;
}