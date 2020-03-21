#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i<(n/2))
			arr[i][j]=1;
		if(j<(m/2))
			arr[i][j]=1;
			else
			arr[i][j]=0;
		if else{
			if(j<(m/2))
				arr[i][j]=2;
			else
				arr[i][j]=3;
		}
		
		}
	}

cout<<arr[i][j]<<" "<<endl;
return 0;
}