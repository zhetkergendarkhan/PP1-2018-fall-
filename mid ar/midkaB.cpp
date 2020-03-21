#include <Iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    { 
          if(s[i+2]=='1')
        cout<<"Astana";
        }
        else if(s[i+2]=='2')
        {
            cout<<"Almaty";
        }
    

    return 0;
}