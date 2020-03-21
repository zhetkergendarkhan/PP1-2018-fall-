#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;

for (int i = 2; i <= n; ++ i) {
if (n % i == 0 && n==1)
cout << n[i];
}
return 0;
}