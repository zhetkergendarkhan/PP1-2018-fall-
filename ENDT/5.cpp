#include<iostream>
#include<map>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    int n;
    cin>>n;
    map<string, string> m;
    string s, s2;
    for(int i = 0; i < n; ++i){
        cin>>s>>s2;
        m[s2] = s;
    }
    cin>>n;
    for(int i = 0; i < n; ++i){
        cin>>s;
        for(map<string, string>::iterator it = m.begin(); it != m.end(); ++it){
            if(s == (*it).first){
                q.push((*it).second);
            }
        }
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}