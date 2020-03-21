#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main(){
vector<int>v;
int n;
for(int i=0;i<5;i++){
cin>>n;
v.push_back(n);
}
if(find(v.begin(),v.end(),0)!=v.end()){
cout<<"yes";
} else
cout<<"no";


	return 0;
}