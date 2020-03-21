#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    
    int evn = 0;
    int odd = 0;

    for(int i = 0; i < s.length(); i = i +2){
        evn += (int) s[i] - 48;
    }

     for(int i = 1; i < s.length(); i = i +2){
        odd += (int) s[i] - 48;
    }

    if(evn == odd)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
}