#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int arr[n]; 
	int ind = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){

			if(arr[i] == arr[j] && i != j)
				ind = i;
		}
	}

	cout << arr[ind];

	return 0;
}