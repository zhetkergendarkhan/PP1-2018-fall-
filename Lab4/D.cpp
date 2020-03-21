#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][n];
    int cnt;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        arr[i][0] = i;
    }

    for(int j = 0; j < n; j++){
        arr[0][j] = j;
    }
    
    
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
                arr[i][j] = arr[i][0] * arr[0][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}