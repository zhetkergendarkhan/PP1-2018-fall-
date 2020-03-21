#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool f = true;
    int cnt = 0, cnt1 = 0;
    if(s.size() < 3 || s.size() > 15){
        cout << "Invalid name";
        return 0;
    }
    if(s[0] >= 'a' && s[0] <= 'z'){
         cout << "Invalid name";
         return 0;
    }
    for(int i = 1; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'y'){
            cnt++;
        }
    }
    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            f = false;
        }
    }
    if(s[0] == 'A' || s[0] == 'E' || s[0] == 'O' || s[0] == 'I' || s[0] == 'U' || s[0] == 'Y'){
            cnt1++;
        }
    if(f == true && (cnt  >0 || cnt1 == 1)){
        cout << "Hi, " << s;
    }else{
        cout << "Invalid name";
    }
    return 0;
}