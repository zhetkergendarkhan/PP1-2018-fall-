

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	
    int n;
    cin >> n;
    int arr[n];




    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << arr[0] << " ";

    for(int i = 1; i < n; i++){
        if(arr[i-1] == arr[i])
            continue;
        cout << arr[i] << " ";
        
    }

	return 0;
}

