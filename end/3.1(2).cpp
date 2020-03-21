#include<iostream>
#include<iomanip>
using namespace std;
int pi=3.141592;
int main(){
	int r;
	cin>>r;
	float p;
	p=pi*r*r;
	cout<<fixed<<setprecision(2)<<p<<endl;
	return 0;
}