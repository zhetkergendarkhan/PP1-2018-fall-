#include <iostream>
using namespace std;
//Аргумент передается по ссылке и по значению:
void change(int m, int n){
int k;
k=n;
n=m;
m=k;
cout<<"m ="<<m<<endl;
cout<<"n ="<<n<<endl;
}
int main(){
int m,n;
cin>>n>>m;
change(m,n);
cout<<"m ="<<m<<endl;
cout<<"n ="<<n<<endl;
return 0;
}