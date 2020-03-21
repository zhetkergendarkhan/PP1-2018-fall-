#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[500500];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int x=-8000,y=0;
	for(int i=1;i<=n;i++){
	
	if(a[i]>x)
		x=a[i],y=i;
}

cout<<y<<endl;
return 0;
}