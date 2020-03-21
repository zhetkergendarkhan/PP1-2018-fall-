#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    bool issm = true;

    int i = 0;
        for(int j = s.length() -1 ; j >= s.length() / 2; j--){
                

                if(issm){

                    if(s[i] != s[j]){
                        issm = false;
                    }
                }
                i++;
        }
  
   
    if(issm)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}