#include <iostream>
#include<algorithm>
using namespace std;

int main(){

    int n , m;

    cin >> n >> m;   
    int a[n][m];
    int cnt , drop = 10000 , s;
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }cout << endl;
      for(int i = 1; i <= n; i++){
          cnt = 0;
          for(int j = 1; j <= m ; j++)
              cnt += a[i][j];
              cout << "The sum of row number" << " " <<  i << " " << "is" << " " << cnt << endl;
      }
      for(int i = 1; i <= m; i++){
          cnt = 0;

        for(int j = 1; j <= n; j++)
            cnt += a[j][i];
            cout << "The sum of column number"<< " " << i << " " << "is" << " " << cnt << endl; ;
        
    }
      
    return 0;

}