#include <iostream>
#include <string>
using namespace std;

int main(){
    bool g=1;
    
    
    
string s;
cin>>s;
for(int i = 0; i <s.size() ; i++){
    for(int j= i+1; <s.size();j++){
        if(s[i]==s[j]){
            g=0;
        
    }
    }
    }
     if(g==1)
        cout<<"Yes";
    else
        cout<<"No";
     
     
            
     return 0;
}