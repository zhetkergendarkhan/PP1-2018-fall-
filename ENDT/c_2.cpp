#include <iostream>
#include <set>
using namespace std;

set<string> st;

int main(){
	// freopen("input.txt" , "r" , stdin);
	string x;
	while(cin >> x){
		st.insert(x);
	}
	if(st.size() >= 7) cout << "Good";
	else cout << "Not good";
	return 0;
}