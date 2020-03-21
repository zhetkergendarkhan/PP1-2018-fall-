#include <iostream>
#include<algorithm>
using namespace std;

int main(){

    int n , m;

    cin >> n >> m;   
    int a[n][m];
    int cnt , drop = 10000 , s;
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
      for(int i = 0; i < n; i++){
          cnt = 0;
          for(int j = 0; j < m ; j++)
              cnt += a[i][j];
              if(cnt < drop){
                  drop = cnt;
                  s = i;
              }
          
      }
     cout << ++s;
      
    return 0;

}