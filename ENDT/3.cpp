#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string> v;
    string s;
    string s2;
    getline(cin, s);
    bool x = 1;
    int k = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == ' ' || i == s.size() - 1){
            s2 = s.substr(k, i);
            k = i + 1;
        }
        for(int j = 0; j < v.size(); ++j){
            if(s2 == v[j]){
                x = 0;
            }
        }
        if(x == 1){
            v.push_back(s2);
        }
        x = 1;
    }
    for(int i = 0; i < v.size(); ++i){
        cout<<v[i]<<" ";
    }
    if(v.size() >= 7) cout<<"Good";
    else cout<<"Not good";


    return 0;
}