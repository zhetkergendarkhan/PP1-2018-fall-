#include<iostream>
using namespace std;
void power (){
	int a,b;
	cin>>a>>b;
	if(b==0)
		a=1;
	else if(b==1)
		a=a;
	else if(b==2)
		a=a*a;
	else if(b==3)
		a=a*a*a;
	cout<<a<<endl;
}
int main(){
	power();
	return 0;

}