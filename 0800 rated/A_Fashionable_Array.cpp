// Problem Link https://codeforces.com/contest/2110/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    int i = 0, j = n - 1, count1 = 0, count2 = 0;
    while((a[i] + a[j]) % 2){
        count1++;
        i++;
    }
    while((a[0] + a[j]) % 2){
        count2++;
        j--;
    }
    cout << min(count1, count2) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}