#include<iostream>
#include<set>

using namespace std;

int main(){
    string s;
    set<string> st;
    while(cin>>s){
        st.insert(s);
    }
    for(int i=0;i<st.size();i++){
    if(st.size() >= 7) cout<<"Good";
    else cout<<"Not good";
}

    return 0;
}