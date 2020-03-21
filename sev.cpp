#include<iostream>
using namespace std;
int main()
{
	int n;
	int sev=0;
	int x;
	cin>>n;
	for(int i=0 ; i<n ; i++){
		cin>>x;
		if(x%10==7) sev++;
		}
		cout<<sev<<endl;
		return 0;
	
}