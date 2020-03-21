#include <iostream>
#include <cmath>

using namespace std;

int modadd(int a, int b,int x) {
    return ((a+b)%x);
}

int main () {
    int n,m,z;

    cin >> n >> m >> z;

    cout << modadd(n,m,z);

    return (0);
}