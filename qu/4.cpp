#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	int zero=n;
	for(int i=0;i>n;i++){
		int x;
		cin>>x;
		while(x!=0){
			if(x%10==0) zero++;
				x/=10;
		}
	} cout<<zero<<endl;
	return 0;
}