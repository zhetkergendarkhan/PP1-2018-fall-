#include <iostream>
#include <string>
using namespace std;


int main(){
    int  n, m;
   
    cin >> n >> m;

    int mas[n][m];

    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
           if (i<(n/2)) {
               if (j<(m/2)) mas[i][j] = 1;
               else mas[i][j] = 0;
           } else {
                    if (j<(m/2)) mas[i][j] = 2;
                    else mas[i][j] = 3;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout << mas[i][j] << " ";
        } cout << endl;
    }



    return 0;
}