#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	set<int>myset;
	max=-500500;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int v;
	
	cin>>v;
	myset.insert(v);
}
set<int> ::iterator it;
 for(it = myset.begin();it!=myset.end();it++){
 	if(*it>max)
 		*it=max;
 	cout<<*it<<" ";

}
return 0;
}