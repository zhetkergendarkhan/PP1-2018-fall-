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
    int plus=0;
    for(int i=1;i<=n;i++){
    	if(a[i]>0)
    		++plus;
    }
    cout<<plus;
    return 0;
}