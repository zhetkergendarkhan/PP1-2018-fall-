#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		v.push_back(w);
	}
	sort(v.begin(),v.end());

		cout<<v[v.size()-1]-v[0]<<" ";
		return 0;
	
}