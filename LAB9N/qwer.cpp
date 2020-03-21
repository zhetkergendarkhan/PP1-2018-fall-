#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int> m;
	for(int i=0;i<n;i++){
	int x;
	cin>>x;
	m[x]++;
}
int qwer=0;
for(map<int,int> :: iterator it; it=m.begin();it!=m.end();it++){
	if(it->second >1) qwer++;
	
}
cout<<qwer<<endl;
return 0;	
}