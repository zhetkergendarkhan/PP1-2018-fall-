

#include <iostream>


using namespace std;

int main()
{
	long n, t;
    cin >> n >> t;
    long arr[n];
    bool is_found = false;
    bool at_the_end = true;
    long index = 0;
	for (long i = 0; i < n; i++) {
		cin >> arr[i];
	}
   
    
	for (long i = 0; i < n; i++) {
        
        if(arr[i] == t){
            is_found = true;
            index = i + 1;
        }
        
	}

    if(is_found)
        cout << index;
    else{
        for (long i = 0; i < n; i++) {
        
        if(arr[i] > t){
            index = i;
            at_the_end = false;
            break;
        }
        
	}
    if(at_the_end){
        index = n;
    }
    cout << index;
    }
    
   

	return 0;
}

