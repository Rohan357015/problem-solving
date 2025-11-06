#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[m], brr[n];

    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }

    set<int> set1;
    set<int> set2;

    for (int i : arr) {
        set1.insert(i);
    }
    for (int i : brr) {
        set2.insert(i);
    }

    set<int> intersection;
    set_intersection(set1.begin(), set1.end(),
                     set2.begin(), set2.end(),
                     inserter(intersection, intersection.begin()));

    int p = intersection.size();
    
    // set<int> intersection2;
    // set_intersection(set2.begin(), set2.end(),
    //                  set1.begin(), set1.end(),
    //                  inserter(intersection2, intersection2.begin()));

    // int q = intersection2.size();
    cout << (m-p) * (n-p) << endl;

    return 0;
}