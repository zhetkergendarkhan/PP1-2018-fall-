#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    bool issm = true;

    for(int i = 0;i<s.length();i++){
        for(int j = 0 ; j < s.length(); j++){
                

                

             if(s[i] == s[j]){
                        issm = false;
                    }
                
                
        }
    }
  
   
    if(issm==true)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}