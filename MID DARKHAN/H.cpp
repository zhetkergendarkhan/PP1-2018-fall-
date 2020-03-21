#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  int sum=0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i=n-1;i>0;i--){
    sum +=abs(a[i]-a[i-1]);
  }
  
  cout<<sum;
     
     
            
     return 0;
}