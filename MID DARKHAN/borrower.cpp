#include <iostream>


using namespace std;


int main(){
    int  n, b ,c ,k =0;
   
    cin >> n >> b >> c;

    int mas[n];

    for (int i = 0; i < n; i++)  {
       cin >> mas[i];
    }

    for (int i = 0; i < n; i++)  {
       if ((mas[i]+b) >= c) k++;
    }
    cout << k;

    return 0;
}