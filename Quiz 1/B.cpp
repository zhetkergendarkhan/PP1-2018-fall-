#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int l = 0;
	int al_l = 0;

	for(int i = 1; i <= n; i++){
		if(i % 7 == 0)
			l++;
		if(i % 7 == 2)
			al_l++;
	}

	cout << al_l + l;

	return 0;
}