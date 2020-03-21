#include <iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,int> m;
    map<int,int> :: reverse_iterator it;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    int cnt = 0;
    for(it = m.rbegin(); it != m.rend(); it++){
        cnt++;
        if(cnt == 2){
            cout << (*it).second;
            break;
        }
    }
    return 0;
}