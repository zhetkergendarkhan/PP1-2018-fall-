

#include <iostream>


using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
    int max = 0;
    int max_index = 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    max = arr[0];
    
	for (int i = 0; i < n; i++) {
		if (arr[i] > max){
			max = arr[i];
            max_index = i + 1;
        }
	}

    cout << max_index;


	return 0;
}

