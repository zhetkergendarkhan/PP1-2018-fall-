#include<iostream>
using namespace std;
int main(){
	  int a,b,x,y;
	  cin >> a >> b >> x >> y;
	  if((a==x) && (b/2==y)){ 
	  	cout << "Yes";
	  }
	  	else if((b==y) && (a/2==x)){
	  cout << "Yes";
	}
	  else cout << "No";
	  return 0;
}
