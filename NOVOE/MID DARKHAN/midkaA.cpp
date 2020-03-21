#include <iostream>
using namespace std;
void Problem_A()
{
    int a,b,c;
    cin>>a>>b;
   if((c=a-b)<0)
   {
   cout<<c*(-1)<<endl;
   }
   else
   {
       cout<<c<<endl;
   } 
}
int main()
{
   Problem_A();
   return 0;
}