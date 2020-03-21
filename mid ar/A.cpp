#include<iostream>
using namespace std;
void absolute(){
	int a,b,c;
cin>>a>>b;
if((c=a-b)<0)
{
	cout<<(c*(-1))<<endl;
}
else{
cout<<c<<endl;
}
}
int main()
{
	absolute();
	return 0;
}