#include<iostream>
using namespace std;
int main()
{
int a,b,sum=0;
cin>>b;
while(b>0)
{
a=b%10;
b=b/10;
sum=sum+a;
}
cout<<<<sum<<endl;
return 0;
}