#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][n];
    int m1, m2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    m1 = arr[0][0];
    m2 = arr[0][0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            if(arr[i][j] > m1){
                m2 = m1;
                m1 = arr[i][j];
            }    
            if(arr[i][j] > m2 && arr[i][j] != m1){
                m2 = arr[i][j];
            }
        }
    }
    if(m2 != m1)
        cout << m2;
    else 
        cout << 0;
    return 0;
}