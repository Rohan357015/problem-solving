#include <bits/stdc++.h>
using namespace std;
bool palindrome( string s){
    string original = s;
    reverse(s.begin(),s.end());
    if(s==original) return true;
    return false;
    
}

int main() {
   string s;
   cin>>s;
   int m;
   cin>>m;
   string rotate = s.substr(m)+s.substr(0,m);
   string rrotate = s.substr(s.size()-m)+s.substr(0,s.size()-m);
   if(palindrome(rotate)|| palindrome(rrotate)){
       cout<<"true";
   }else{
       cout<<"false";
   }
}

