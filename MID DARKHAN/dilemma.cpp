#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int  n, a ,b;
   
    cin >> n >> a >> b;

    int p,s;
    p =  abs(n-a) + abs(n-b);

    s = abs(n-a) + b;

    if (p<s) cout << p;
    else cout << s;

    return 0;
}