#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	vector<int> v;
	int sum;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		v.push_back(w);
	}
	int k;
	cin>>k;
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<k;i++){
		sum+=v[i];
	}
	cout<<sum<<" ";
	return 0;

	}