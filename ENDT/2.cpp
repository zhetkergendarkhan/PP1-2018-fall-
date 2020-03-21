#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, int> m;
    string s;
    int cnt = 0;
    
    vector<string> v;
    for(int i = 0; i < n; ++i){
        cin>>s;
        m[s]++;
 }
    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v.size(); ++j){
            if(v[i] == v[j]){
                cnt++;
            }
        }
        m[v[i]] = cnt;
        cnt = 0;
    }
    for(map<string, int>::iterator it = m.begin(); it != m.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}