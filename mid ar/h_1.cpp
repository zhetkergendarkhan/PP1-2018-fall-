#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'g' && s[i-1] == 'r' && s[i+1] == 'b'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}