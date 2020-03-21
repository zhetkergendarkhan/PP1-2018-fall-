#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    bool f = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a +n);
    for(int i = 0; i < n; i++){
        if(a[0] == a[n - 1]){
            f = true;
        }
    }
    if(f == true){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}