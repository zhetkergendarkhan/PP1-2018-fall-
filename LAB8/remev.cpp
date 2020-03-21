#include<iostream>
#include<vector>
#include<set>
#include<cmath>
using namespace std;
int main(){
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        s.insert(v);
    }
    for(set<int> ::iterator it = s.begin();it!=s.end();it++)
        if((*it)%2!=0)
        cout<<*it<<endl<<" ";
    return 0;
}