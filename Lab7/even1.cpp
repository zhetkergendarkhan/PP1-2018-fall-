#include<iostream>
using namespace std;
int even(string s,int n,int sum){
	if(s.size()==n)
		return sum;
	if(int (s[n]-'0')%2==0){
		return even(s,n+1,sum+1);
	}
	return even(s,n+1,sum);

}
int main(){
	string s;
	cin>>s;
	cout<<even(s,0,0);
	return 0;
}