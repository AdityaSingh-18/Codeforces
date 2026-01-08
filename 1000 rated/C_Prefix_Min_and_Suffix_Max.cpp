// Problem Link https://codeforces.com/contest/2123/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    vector<int> prefixMin(n), suffixMax(n);
    prefixMin[0] = a[0], suffixMax[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++){
        if(a[i] < prefixMin[i - 1])    prefixMin[i] = a[i];
        else    prefixMin[i] = prefixMin[i - 1];
    }
    for (int i = n - 2; i >= 0; i--){
        if(a[i] > suffixMax[i + 1])    suffixMax[i] = a[i];
        else    suffixMax[i] = suffixMax[i + 1];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == prefixMin[i] || a[i] == suffixMax[i])    cout << 1;
        else    cout << 0;
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We compute the min and max element at each index considering the subarray from 0 to i for prefix
and n to i for suffix.
If the current element x is equal to either current prefixMin or suffixMax then we can transform the
array into current element x.
Time Complexity: O(n)
Space Complexity: O(n)

*/