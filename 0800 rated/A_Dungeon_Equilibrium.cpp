// Problem Link https://codeforces.com/problemset/problem/2157/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> freq(101);
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        freq[x]++;
    }
    int count = 0;
    for (int i = 0; i <= 100; i++){
        if(freq[i] > i)    count += freq[i] - i;
        else if(freq[i] < i)    count += freq[i];
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