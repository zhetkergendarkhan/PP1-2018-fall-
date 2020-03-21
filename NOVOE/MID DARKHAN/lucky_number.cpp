#include <iostream>
#include <string>

using namespace std;


int main(){
    string s;
    getline(cin,s);
    int  n = 0;
   
    while (s.find("375") != string::npos) {
        n++;        
    } 

    cout << n;

    return 0;
}