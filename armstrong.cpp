#include <bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int sizee = to_string(n).size();
    int sum =0;
    while(n>0){
        int digit = n%10;
        sum += pow(digit,sizee);
        n/=10;
    }
    return sum;
}

int main() {
    int n, k;
    cin>>n>>k;
    int count = 0;
    for(int i= n;i<=k;i++){
        if(i == armstrong(i)){
            count++;
            cout<<i<<" ";
        }
    }
    if(!count){
        cout<<-1;
    }
}
