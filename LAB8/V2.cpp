#include <iostream>

using namespace std;

int rec(string s,int i){
	
		if(s[i]>='a' && s[i]<='z'){
			return -1;
		}
	     else if(s[i]>='A' && s[i]<='Z')
	     		return s[i];
return rec(0,i+1);
}


int main(){
	string s;
	cin>>s;
cout<<rec(s,0);
	return 0;
}