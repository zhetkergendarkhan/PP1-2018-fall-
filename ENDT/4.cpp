#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int x;
    int a, b, c;
    for(int i = 0; i < n; ++i){
        cin>>x;
        v.push_back(x);
    }
    cin>>a>>b>>c;
    v.erase(v.begin() + (a-1));
    v.erase(v.begin() + (b- 1), v.begin() + c);
    for(int i = 0; i < v.size(); ++i){
        cout<<v[i]<<" ";
    }
    return 0;
}