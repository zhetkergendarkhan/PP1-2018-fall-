#include <iostream>
using namespace std;

int main(){
    int a , b , a1 , b1;
    cin >> a >> b >> a1 >> b1;
    if(a1 > a){
        cout << "Yes";
    }else if(a == a1 && b1 > b){
        cout << "Yes";
    }else if(a == a1 && b1 == b){
        cout << "No";
    }else{
        cout << "No";
    }
    return 0;
}