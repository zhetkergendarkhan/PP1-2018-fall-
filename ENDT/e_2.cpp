#include<iostream>
#include<map>
#include <vector>
#include<queue>

using namespace std;
map<string , string> mp;
vector<pair<string , string> > v;
int main(){
   int n , m;
   cin >> n;
   string city , country;
   for(int i = 0; i < n; i++){
    cin >> country >> city;
    v.push_back(make_pair(country , city));
   }
   // map<string , string>::iterator it;
   vector<pair<string , string> >::iterator it;
   cin >> m;
   for(int i = 0; i < m; i++){
    cin >> country;
    for(int j = 0; j < v.size(); j++){
        if(country == v[j].second){
         cout << v[j].first << endl;
         break;
     }
    }
   }
    return 0;
}