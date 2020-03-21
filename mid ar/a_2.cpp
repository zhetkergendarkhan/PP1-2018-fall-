#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }for(int i = 1; i < n - 1; i++){
        if(a[i] == 0){
            cnt++;
        }
    } cout << cnt + 1;
    return 0;
}