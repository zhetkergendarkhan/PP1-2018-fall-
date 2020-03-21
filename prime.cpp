#include <iostream>
#include <cmath>
using namespace std;
int main () {
int n;
cin >> n;
if (n == 1) {
cout << "No";
}
for (int i = 2; i <= n; ++ i) {
if (n % i == 0)
cout << "No";
}
else{
cout << "Yes";
}
return 0;
}