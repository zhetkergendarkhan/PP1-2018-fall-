#include<iostream>
using namespace std;
string s;
int main() {

cin >> s;
char cur = s[0];
for(int i = 1;i < s.size();i ++) {
if(s[i] == cur) continue;
if(s[i] > cur) cur = s[i];
else {
cout << "NO";
exit(0);
}
}
cout << "YES";
return 0;
}