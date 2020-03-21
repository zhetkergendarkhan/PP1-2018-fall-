#include <iostream>
#include <string>

using namespace std;


int main(){
    string s,s1;
    getline(cin,s);
    getline(cin,s1);

    int n = 0;
    int k;
   
    for(int i=0; i < s.size(); i++){
        k = int(s[i]);
        if ((int(s1[i]) == (k+32)) or (int(s1[i] ) == (k-32)) or (int (s1[i]) == k)) {
            n++;
        }
    }

    if (n == s.size()) 
        cout << "Valid";
    else 
        cout << "Invalid";

    return 0;
}
