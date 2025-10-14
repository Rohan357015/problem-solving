#include <bits/stdc++.h>
using namespace std;

int main() {
  int n ;
  cin>>n;
  int arr[n];
  int copy[n];
  for(int i = 0;i<n;i++){
      cin>>arr[i];
      copy[i]=arr[i];
  }
  
  sort(arr,arr+n,greater<int>());
  for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
          if(arr[i]==copy[j]){
              cout<<j+1<<" ";
          }
      }
  }

}
