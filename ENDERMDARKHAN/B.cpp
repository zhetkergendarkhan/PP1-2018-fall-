#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    float sum = 0;
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        sum += b;
    }
    float r = abs(sum / n);
    printf("%.2f",r );
    return 0;
}