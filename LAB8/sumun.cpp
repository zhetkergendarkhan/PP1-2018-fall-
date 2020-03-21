#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int main(){
int n, a,sum;
cin >> n;
set<int> v;
for(int i = 0; i < n; i++){
cin >> a;

v.insert(a);
sum+=a;
}
cout << sum << "\n";
return 0;
}