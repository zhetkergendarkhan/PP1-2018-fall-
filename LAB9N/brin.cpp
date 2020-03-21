#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        sum += b;
    }
    double g = abs(sum /n);
    printf("%.2f",g );
    return 0;
}