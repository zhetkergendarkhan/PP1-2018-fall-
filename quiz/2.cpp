#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0;
	int z=0;

	for(int i=1;i<=n;i++){
		
if(i%7==0)
		a++;
	else if(i%7==2 )
		z++;
}

	cout<<a+z<<endl;
	return 0;


}
