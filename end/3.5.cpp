#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> m;
 int n,x;
 cin>>n;
 for(int i=0;i<n;i++){
 	cin>>x;
 	m[x]++;
 }
 map<int,int>::reverse_iterator it;
 for(it=m.rbegin();it!=m.rend();it++){

 cout<<(*it).first;
 break;
}

 return 0;
}