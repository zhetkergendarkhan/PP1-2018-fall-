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
	int h,g;
	cin>>h>>g;	
    v.insert(v.begin()+h,g);

for(int i=0;i<v.size();i++)
{
	cout<<v[i]<<" ";
}
return 0;
}