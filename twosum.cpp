#include <bits/stdc++.h>
using namespace std;

int main() {
    int m ,k;
    cin>>m>>k;
    int arr[m];
    for(int i = 0;i<m;i++){
        cin>>arr[i];
    }
    set<int> set1;
    bool t = false;
    for(int i =0;i<m;i++){
        int q = k-arr[i];
        if(set1.count(q)!=0) t = true;
          
        set1.insert(arr[i]);
        q=0;
        
    }
    if(t)cout<<"true";
    else cout<<"false";
    
}de