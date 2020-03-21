#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++){
        int b;
        cin >>b;
        sum+=b;
    }
    if(sum <= q)
     cout << "YES";
    else 
    	cout << "NO";
    return 0;
}

