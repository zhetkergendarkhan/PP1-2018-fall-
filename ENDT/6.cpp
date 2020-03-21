#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> v1;
    vector<pair<string, int> > v;
    int n;
    cin>>n;
    string s;
    int max_size = 0, min_size = 1e9 + 17;
    int cnt = 0, cnt2 = 0, cntmin = 0, cntmax = 0;
    for(int i = 0; i < n; ++i){
        cin>>s;
        v1.push_back(s);
        v.push_back(make_pair(s, s.size()));
        if(s.size() > max_size){
            max_size = s.size();
        }
        if(s.size() < min_size){
            min_size = s.size();
        }
    }
    for(int i = 0; i < v1.size(); ++i){
        for(vector<pair<string, int> >::iterator it = v.begin(); it != v.end(); ++it){
            if(v1[i] == (*it).first){
                if((*it).second == max_size){
                    cnt ++;
                }
                if((*it).second == min_size){
                    cnt2++;
                }
            }
        }
        if(cnt2 > cntmin) cntmin = cnt2;
        if(cnt > cntmax) cntmax = cnt;
        cnt = 0;
        cnt2 = 0;
    }
    if(cntmax > cntmin) cout<<"Not my type";
    else if(cntmin >= cntmax) cout<<"My type!";

    return 0;

}