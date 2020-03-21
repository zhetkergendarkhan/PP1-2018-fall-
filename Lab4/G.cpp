#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][n];
    

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    int k = n-1;
    for(int i = 0; i < n; i++){
        arr[i][k] = i + 1;
        k--;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0)
                cout << ".";
            else 
                cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}