#include <iostream>
#include <cmath>
 using namespace std;

    int absol(int x ,int y){
        int c = abs(x - y);
        return c;
    }

 int main(){
     int a , b;
     cin >> a >> b;
     cout << absol(a,b);
     return 0;
 }
