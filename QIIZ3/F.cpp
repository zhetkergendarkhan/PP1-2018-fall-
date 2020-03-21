#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	vector<int> v;
	int n;
	while(cin>>n){
		v.push_back(n);
	
}
int ans=0;
for (int i = 0; i < v.size(); i++){
	if(v[i]==0){
		ans++;
	}

	else
		cout<<v[i]<<endl;
}
	
	for(int i=0;i<ans;i++){
		cout<<0<<" ";
	}
	return 0;
	

}