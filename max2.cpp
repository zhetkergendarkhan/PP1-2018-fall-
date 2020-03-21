#include <iostream>
using namespace std;
int main()
{
    int max,second_max;
    int n;
    int a[500500];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            second_max=max;
            max=a[i];          
        }
    }
    cout<<second_max<<endl;    
    return 0;
}