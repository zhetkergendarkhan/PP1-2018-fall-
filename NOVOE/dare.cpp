#include <iostream>

using namespace std;



int f2(int a, int n)
{
  if(n == 0)
    return 1;
  return a * f2(a, n - 1);
}


int main()
{
  int a, n;
  cin >> a >> n;
  cout << f2(a, n) << endl;
  return 0;
}