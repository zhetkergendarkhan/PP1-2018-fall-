#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

bool cmp(int a , int b){
	return a > b;
}

int main(){
	int n , k , x;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.begin() + k);
	sort(v.begin() + k , v.end() , cmp);
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}