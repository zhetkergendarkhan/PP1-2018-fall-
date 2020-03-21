#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , k , x = 0;
    cin >> n;
    while(n != 1){
        if(n % 3 == 0){
         n /= 3;
         x++;
        }
        else if(n % 2 == 0){
         n /= 2;
         x++;
        }
        else{
         n -= 1;
         x++;
        }
    }
    cout << x;
    return 0;
}