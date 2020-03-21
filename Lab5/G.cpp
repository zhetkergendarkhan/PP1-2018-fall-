#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s, t;
    cin >> s >> t;
  

    if(s.compare(t) != 0){
        cout << "NO";
    }
    else 
        cout << "YES";
    return 0;
}