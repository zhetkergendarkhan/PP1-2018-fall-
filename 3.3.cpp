#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[500500];
	cin>>n;
	int max=-1e9 - 17;
for (int i=0; i<n; i++){
	cin>>a[i];
}

	for(int i=0;i<n;i++){
if (a[i]>max)
   max=a[i];
}

cout<<max<<endl;
}