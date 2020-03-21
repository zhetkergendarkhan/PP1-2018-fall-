#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int alp[26];
	for(int i = 0 ; i <n ;i++){
		char x;
		cin>>x;
		alp[x - "a"]++;


	}
	for(int i=0;i<26;i++){
		if (alp[i]==0)
		continue;
	
	cout<<char(i + "a")<<" "<<alp[i]<<endl;
}
	return 0;
}