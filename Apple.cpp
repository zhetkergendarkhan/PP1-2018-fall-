#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int N,K;
	cin>>N;
	cin>>K;
    int J;
    J=K%N;
    cout<<(K-J)/N<<endl;

    return 0;
}