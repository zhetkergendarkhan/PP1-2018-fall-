

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
    int n;
    cin >> n;
    for(int i = 0; i <= sqrt(n); i++ ){
        if(i * i == n){
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";

	return 0;
}

