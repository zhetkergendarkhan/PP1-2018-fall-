#include <iostream> 
using namespace std; 
int main() 
{ 
 int n; 
 cin>>n; 
 int k=0; 
 for(int i=0; i<n; i++) 
 { 
 while(n!=0) 
  if(n%10==0) 
   k++; 
  int n= n/10; 
      } 
        cout<<"IQ Darkhana="<<k<<endl; 
        return 0; 
}