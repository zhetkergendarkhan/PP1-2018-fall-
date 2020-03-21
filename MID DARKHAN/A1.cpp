#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0;
    sort(s.begin(), s.end());
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1])
            cnt++;
    }
    if(cnt>=1)
        cout<<"No";
    else
        cout<<"Yes";
    


    return 0;
}