#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    string s2, s3;
    int cnt = 0, cnt2 = 0;
    int max_size = 0;
    int min_size = 1e9 + 17;
    vector<pair<string, int> > v;
    for(int i = 0; i < n; ++i){
        cin>>s;
        if(s.size() > max_size){
            max_size = s.size();
            s2 = s;
        }
        if(s.size() < min_size){
            min_size = s.size();
            s3 = s;
        }
        v.push_back(make_pair(s, s.size()));
    }
    for(vector<pair<string, int> >::iterator it = v.begin(); it != v.end(); ++it){
        if((*it).first == s2){
            cnt ++;
        }
        if((*it).first == s3){
            cnt2 ++;
        }
    }
    if(cnt > cnt2) cout<<"Not my type";
    else cout<<"My type!";

    return 0;
}