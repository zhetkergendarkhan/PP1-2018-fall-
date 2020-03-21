#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int c = 0;

	if(n % 2 == 0)
		c++;
	if(n % 5 == 0)
		c++;
	if(n % 17 == 0)
		c++;
	if(n % 19 == 0)
		c++;

	if(c > 1)
		cout << "YES";
	else 
		cout << "NO";
	

	return 0;
}