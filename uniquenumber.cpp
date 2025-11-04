#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
      cin>>arr[i];
  }
  set<int>result;
  for(int i = 0;i<n;i++){
      result.insert(arr[i]);
  }
  
  
  for(int i : result){
      cout<<i<<" ";
  }
  cout<<endl<<result.size();
}

