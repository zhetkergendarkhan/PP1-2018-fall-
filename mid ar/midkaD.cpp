#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2;
    cin>>s2;
    for(int i=0;i<s2.length();i++)
    {
        if (s2.find(s))
        
            s.erase(s2.length())
        }
    
    cout<<s2<<endl;

    return 0;
}