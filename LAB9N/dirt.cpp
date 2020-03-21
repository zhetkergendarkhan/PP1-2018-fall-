#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    string s = "",
    k = "";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(a[i][j] != a[n-i-1][n-j-1]){
                    cout << "NO";
                    return 0;
                }
            }
            if(i+j+1 == n){
                if(a[i][j] != a[j][i]){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
        
    cout << "YES";
    return 0;
}