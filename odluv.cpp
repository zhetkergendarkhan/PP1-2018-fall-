#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x%2!=0){
		cout<<"Super";
	} else if(x>20){
		cout<<"Not super";
	} else if(x%2==0 && x>=2 && x<=5){
        cout<<"Not super";
	} else if(x%2==0 && x>=6 && x<=20){
		cout<<"Super";
	}
	return 0;
}
