#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s;
    cin >> s;

    int cpt = 0;
    int sml = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            cpt++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            sml++;        
    }

    cout << sml << " " << cpt;

    return 0;
}