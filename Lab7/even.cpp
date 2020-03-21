#include<iostream>

using namespace std;
int main(){
	string s;
	int cnt;
	cin>>s;
	for(int i = 0 ;i<s.size();i++){
		if(s[i]%2==0)
			cnt++;
	}
	cout<<cnt;
	return 0;
}

