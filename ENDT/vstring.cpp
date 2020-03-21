#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   vector<pair<string,int> > v;
   int n;
   cin>>n;
   string x;
   int y;
   for(int i=0;i<n;i++)
   {
       cin>>x>>y;
       v.push_back(make_pair(x,y));
   }    
   sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}