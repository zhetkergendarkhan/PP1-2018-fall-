#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[500500];
	int max=0;
	int min=84656;
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
	for(int i=0;i<n;i++){
if(max<a[i])
	max=a[i];
	}
	for(int i=0;i<n;i++){
		if(min>a[i])
			min=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==max)
			a[i]=min;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
	
}