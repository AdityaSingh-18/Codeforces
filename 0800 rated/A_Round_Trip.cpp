// Problem Link https://codeforces.com/problemset/problem/2161/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int rating, cutOff, delta, rounds;
    cin >> rating >> cutOff >> delta >> rounds;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < rounds; i++){
        if(s[i] == '1' || rating < cutOff){
            rating = max (0, rating - delta);
            count++;
        }
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