#include <iostream>
using namespace std;

int main(){
    int n , x , y;
    cin >> n >> x >>y;
    int c = n * x;
    if(c == y){
        cout << "No difference";
    }else if(c > y){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}