#include<iostream>
using namespace std;
string s;

int main() {

cin >> s;
char ans = s[0];
for(int i = 1;i < s.size();i ++) {
ans = max(ans,s[i]);
}
cout << ans;
return 0;
}
