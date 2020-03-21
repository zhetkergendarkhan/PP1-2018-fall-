#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    int l = s.length();
    int n[l];
    bool istr = true;

    for(int i = 0; i < l; i ++){
        n[i] = 0;
    }
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            if(s[i] == s[j])
                n[i] += 1;
        }    
    
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            if(n[i] != n[j]){
                istr = false;
                cout << "NO";
                return 0;
            }
            
        }
    }

    cout << "YES";
    return 0;


}