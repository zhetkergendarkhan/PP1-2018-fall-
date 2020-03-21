#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < 8; i++){
        s[i] = char(n % 2 + 48);
        n = n/2;
    } int k = 0 ;
    for(int i = 0; i < 8; i++){
        if(s[i] == '1'){
            k = i;
            break;
        }
    } cout << k;
    
    return 0;
}