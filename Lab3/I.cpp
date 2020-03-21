

#include <iostream>


using namespace std;

int main()
{
	int n, l, r;
	cin >> n >> l >> r;
	int arr[n];
    int c = 0;
    l -= 1;
    r -= 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
   
    
	for (int i = 0; i < n; i++) {
        if(i == l){
            for(int j = r; j >= l; j--){
                cout << arr[j] <<  " ";
            }
            i = r;
        }
        else{
            cout << arr[i] << " ";
        }
        
	}

    
   

	return 0;
}

