#include<iostream>
using namespace std;
int main()
{
	int n,rw,cl,max=-500500;
	cin>>n;
	int arr [n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)

			cin>>arr[i][j];

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(arr[i][j]>max){
					max=arr[i][j];
					rw=i;
					cl=j;

				}
				cout<<++rw<<" "<<++cl;
				return 0;

}