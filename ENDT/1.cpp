#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    set<int> s;
    int max = -1e9 - 17;

    while(cin>>n){
        if(n == 0) break;
        s.insert(n);
    }
    for(set<int>::iterator it = s.begin(); it != s.end(); ++it){
        if(*it > max){
            max = *it;
        }
    }
    cout<<max;

    return 0;
}