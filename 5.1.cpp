#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int cnt=0;
	int cnt_1=0;
	for(int i=0;i<=s.size();i++ )
	
  
    if ((s[i]>='A') && (s[i]<='Z')){
    	cnt++;
    }
    if((s[i]>='a') && (s[i]<='z')){
    	cnt_1++;
    
    cout<<cnt<<" "<<cnt_1<<endl;
    }
    return 0;
     
}

	


