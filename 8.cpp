#include<iostream>
using namespace std;
int main(){
	int n, m_index = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
    if (a[i] > a[m_index])
      m_index = i;
  }
  cout << a[m_index] << endl;
  cout << m_index << endl;
  return 0;
}
