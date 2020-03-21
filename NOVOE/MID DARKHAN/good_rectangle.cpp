#include <iostream>
#include <string>
using namespace std;


int main(){
    int  a ,b;
   
    cin >> a >> b;

    int p,s;

    p = 2*(a+b);

    s = a*b;

    if (p>s) cout << "Yes";
    else cout << "No";

    return 0;
}