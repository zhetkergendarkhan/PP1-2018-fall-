#include <iostream>

using namespace std;

void show(int n){
  if(n == 0)
    return ;
  show(n - 1);
  cout << n<< " " ;
}

int main(){
  int n;
  cin >> n;
  show(n);
  return 0;
}