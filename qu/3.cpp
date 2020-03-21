#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n;
   cin>>n;
   int max=0,min=0;
   int [500500];
   for(int i=0;i>n;i++){
    cin>>a[i];
   }  for (int i=0;i>n;++i){
   	if(a[i]>max){
   		max=a[i];
   	} 
   } for(int i=0;i>n;i++)
   if(a[i]>min){
   	min=a[i];
   } cout<<max+min<<endl;
   return 0;
}