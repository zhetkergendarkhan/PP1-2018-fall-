#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n; 
	cin >> n;
	int a, b;
	
	if(n % 2 == 0)
		for(int i = 2; i <= sqrt(n); i++){
			for(int j = n / i; j < n; j++){
				if(i*j == n){
					a = i;
					b = j;
					break;
				}
			}
		}

	else 
		for(int i = sqrt(n); i >= 1; i = i - 1){
			for(int j = 2; j <= n; j = j + 1){
				if(i*j == n){
					a = i;
					b = j;
					break;
				}
			}
		}
	cout << a << " " << b;

	return 0;
}