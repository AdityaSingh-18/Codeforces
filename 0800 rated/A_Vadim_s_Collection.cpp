// Problem Link https://codeforces.com/contest/2098/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    vector<int> freq(10);
    for (int i = 0; i < 10; i++){
        freq[s[i] - '0']++;
    }
    for (int i = 9; i >= 0; i--){
        if(freq[i] > 0){
            freq[i]--;
            cout << i;
        }
        else{
            int j = i + 1;
            while(!freq[j]){
                j++;
            }
            cout << j;
            freq[j]--;
        }
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}