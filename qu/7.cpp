#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a%2!=0 && b%2==0){
		cout<<"Black";
	} else if (a%2==0 && b%2!=0){
		cout<<"White";
	}
	else if (a%2==0 && b%2==0){
		cout<<"Black";
	} else if (a%2!=0 && b%2!=0){
		cout<<"White";
	
	} return 0;
}