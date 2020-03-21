#include <iostream>
using namespace std;

int maxi(int a , int b , int c){
    int n[] = {a , b , c};
    int d = n[0];
    for(int i = 0; i < 3; i++){
        if(d < n[i]){
            d = n[i];
        }
    }
    return d;
}
int main(){
    int x , y , z;
    cin >> x >> y >> z;
    cout << maxi(x , y , z);
    return 0;
}