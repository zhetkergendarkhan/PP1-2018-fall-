#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

   int arr[n][n];
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int max = arr[0][0];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                if(arr[i][j] > max)
                    max = arr[i][j];
        }
    }   

   

     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                if(arr[i][j] == max){
                    cout << i + 1 << " " << j + 1;
                    return 0;
                    
                }
                     
        }
    }   


    return 0;
}