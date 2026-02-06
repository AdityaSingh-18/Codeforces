// Problem Link https://codeforces.com/contest/2157/problem/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), freq(3 * n), start(3 * n), next(3 * n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    int count = 0, top = 0;
    for (int i = 3 * n - 1; i >= 0; i--){
        start[top] = i;
        for (int j = 1; j <= freq[i]; j++){
            next[j] = start[top];
            top--;
        }
        if(freq[i] > k){
            count = max (count, next[freq[i] - k + 1] - i);
        }
        top++;
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}