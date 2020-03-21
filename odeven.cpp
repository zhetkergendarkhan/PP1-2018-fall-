#include <iostream>
#include <cmath>
using namespace std;
int main(){
int m;
cin>>m;
if(m%2==0){
	cout<<"Even";
}
else if(m%2!=0){
	cout<<"Odd";
}
else if(m==0){
	cout<<"None";
}
return 0;
}