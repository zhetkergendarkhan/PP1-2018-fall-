#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }int k = 1 , sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i] * k;
        k++;
    }cout << sum;
    return 0;
}