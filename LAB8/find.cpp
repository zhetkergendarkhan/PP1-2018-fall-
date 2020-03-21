#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	vector<int> v;
	int b;
	int cnt=0;
	cin>>b;
	for(int i=0;i<b;i++){
		int c;
		cin>>c;
		v.push_back(c);
	}
	
	
		int k;
	    cin>>k;
	    if(find(v.begin(), v.end(), k) != v.end())
cout << "Yes";
else
cout << "No";
return 0;
	    

	}
