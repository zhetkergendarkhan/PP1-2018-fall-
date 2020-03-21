#include <bits/stdc++.h>
using namespace std;

int main(){
	int n , k , x;
	cin >> n >> k;
	vector <int> v;
	for(int i = 0; i < n; i++){
		cin >> x;
		v.push_back(x);
	} int cnt = 0;
	for(int i = 0; i < v.size(); i++){
		for(int j = i + 1; j < v.size(); j++){
			if(v[i] + v[j] == k){
				cnt++;
				break;
			}
		}
	}
	if(cnt == 1){
		cout << "YES";
	}else cout << "NO";
	return 0;
}