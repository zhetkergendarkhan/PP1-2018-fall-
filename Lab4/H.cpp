#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    int sums[n];

    for(int i = 0; i < n; i++){
        sums[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sums[i] += arr[i][j];
        }
    }
    
    int min_sum = sums[0];
    


    for(int i = 0; i < n; i++){
        if (sums[i] < min_sum){
            min_sum = sums[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        if (sums[i] == min_sum){
            cout << i + 1;
            
            return 0;
        }
    }

    return 0;
}