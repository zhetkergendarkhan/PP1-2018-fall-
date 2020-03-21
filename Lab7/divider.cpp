#include<iostream>
#include<cmath>

using namespace std;
int div(int a){
	if (a==1)
		return 1;
	else if(a%2!=0 || a==0)
		return 0;
	else
		return div(a/2);

}
int main(){
	int a;
	cin>>a;
	if(div(a)>0)
		cout<<"Yes";
	else 
		cout<<"No";
	return 0;
}