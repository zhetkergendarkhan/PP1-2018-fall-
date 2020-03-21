#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int max = 0;
	int arr[n];
	int c = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	max = arr[0];

	for(int i = 0; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	for(int i = 0; i < n; i++){
		if(arr[i] == max)
			c++;
	}

	cout << c;


	return 0;
}