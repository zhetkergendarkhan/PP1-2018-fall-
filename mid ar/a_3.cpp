#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int cnt;
	cin>>x>>y;
	string s;
	string d;
	for(int i=0;i<8;i++){
		s[i]=char(x%2+48);
	
	x=x/2;
}
	for (int j=0;j<8;j++){
		d[j]=char(y%2+48);
		y+y/2;
	}
	if(s.find(d) =!string::npos)
		cnt++;
	cout<<cnt;
	return 0;
}
