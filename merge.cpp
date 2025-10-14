#include <bits/stdc++.h>
using namespace std;

int main() {
  int n ,m ;
  cin>>n>>m;
  int arr[n];
  int brr[n];
  
  for(int i = 0;i<n;i++){
      cin>>arr[i];
  }
  for(int i = 0;i<m;i++){
      cin>>brr[i];
  }
  int result[n+m];
  int k = 0;
  int l = 0;
  int p =0;
  
  while(k>n && l >n){
      if(arr[k]<brr[l]){
          result[p]=arr[k];
          k++;
      }else{
          result[p] = brr[l];
          l++;
      }
      p++;
  }
  while (k < n) {
        result[p++] = arr[k++];
    }
    while (l < m) {
        result[p++] = brr[l++];
    }
    
    sort(result, result + n + m);
    for (int i = 0; i < n + m; i++) {
        cout << result[i] << " ";
    }
    
    int mid = result[n-1]+result[n];
    cout<<mid;
  

}
