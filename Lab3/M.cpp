

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	
    int n, m;
    cin >> n;
    vector<int> v(n);
   

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n+m; i++){
        cout << v[i] << " ";
    }
	return 0;
}

