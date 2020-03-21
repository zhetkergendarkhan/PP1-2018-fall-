#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < 8; i++){
        s[i] = char(n % 2 + 48);
        n = n/2;
    }
    
    for(int i = 0; i < 8; i++){
        if(s[i] == '0'){
            s[i] = '1';
        }else{
            s[i] = '0';
        }
    } int k = 1 , sum = 0;
     for(int i = 0; i < 8; i++){
       sum += (int(s[i]) - 48) * k;
       k = k * 2;
    } cout << sum;
    return 0;
}