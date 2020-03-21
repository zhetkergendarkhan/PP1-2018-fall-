#include <iostream>
#include <map>
#include<string>

using namespace std;

int main(){

    map<string, int> m;
    map<string, int> ::iterator it;

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
    string y;
    int k=0;
    cin>>y>>k;
        m[y] = k;
    }

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}