#include <iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<char,int> m;
    m['A'] = 0;
    m['B'] = 0;
    m['C'] = 0;
    map<char,int> :: iterator it;
    for(int i = 0; i < n; i++){
        string s;
        char c;
        cin >> s >> c;
        m[c]++;
    }
     for(it = m.begin(); it != m.end(); it++){
        cout <<(*it).first<< " " <<(*it).second<<endl;
    }
    return 0;
}