#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v;
	int b;
	cin>>b;
	for(int i=0;i<b;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int q;
	cin>>q;
	v.erase(v.begin()+q);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}