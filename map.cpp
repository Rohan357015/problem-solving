#include <bits/stdc++.h>
using namespace std;
bool fun(pair<int , int>key1 ,pair<int ,int>key2){
    return key1.first<key2.first;
}
int main() {
  int n;
  cin>>n;
  vector<int> v(n);
  unordered_map<int ,int> map;
  for(int i =0;i<n;i++){
  cin>>v[i];
}

  for(int i = 0;i<n;i++){
      map[v[i]] = v[i]*v[i];
  }
     

   vector<pair <int , int > >vec (map.begin(),map.end());
   sort(vec.begin() , vec.end() ,fun);
   
   for(auto pair : vec){
       cout<<pair.first<<"  " << pair.second<<endl;
   }
}