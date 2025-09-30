#include <bits/stdc++.h>
using namespace std;

int digitSum(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    if(sum >= 10) {
        return digitSum(sum);
    }
    return sum;
}

void concat(int n, int k) {
    
    int initialSum = digitSum(n);
    
    int finalSum = initialSum * k;

    cout << digitSum(finalSum);
}

int main() {
    int n, k;
    cin >> n >> k;
    concat(n, k);
    return 0;
}
