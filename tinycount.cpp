#include <iostream>
using namespace std;

int search( int arr[] ,int index,int a){
    int count = 0;
    for(int i = index+1 ;i< a;i++ ){
        if(arr[i]<arr[index])count++;
    }
    return count ;
}

int main() {
    int a;
    cin>>a;
    int arr[a];
    for(int i = 0;i<a;i++){
        cin>>arr[i];
    }
    
    for(int i =0;i<a;i++){
        int ans=search(arr, i ,a);
        cout<<ans<<" ";
    }
}