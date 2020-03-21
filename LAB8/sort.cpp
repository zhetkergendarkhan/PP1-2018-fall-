#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v;

	int b;
	cin>>b;
	for(int i=0;i<b;i++){
		int d;
		cin>>d;
		v.push_back(d);
	}
	sort(v.begin(),v.end());

for(int i=0;i<b;i++){
	cout<<v[i]<<" ";
}
return 0;
}


