#include <iostream>

using namespace std;

int main(){

	//int n;
	
	int arr[3]; 
	bool is_isosceles = false;
	//int ind = 0;
	for(int i = 0; i < 3; i++){
		cin >> arr[i];
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == j)
				continue;
			if(arr[i] == arr[j]){
				is_isosceles = true;
			}
		}
	}
	
	if(is_isosceles)
		cout << "Yes";
	else 
		cout << "No";

	return 0;
}