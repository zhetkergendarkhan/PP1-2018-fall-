#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 1; k <= sqrt(arr[i][j]); k++){
                if(k * k == arr[i][j]){
                    arr[i][j] = sqrt(arr[i][j]);
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}