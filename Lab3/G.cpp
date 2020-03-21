

#include <iostream>


using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
    int min = 0;
    int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    max = arr[0];
    min = arr[0];
    
	for (int i = 0; i < n; i++) {
        if(arr[i] > max){
            max = arr[i];
        }
     
        if(arr[i] < min){
            min = arr[i];
        }
	}

    for (int i = 0; i < n; i++){
        if(arr[i] == max)
            cout << min << " ";
        else 
            cout << arr[i] << " ";
   }

	return 0;
}

