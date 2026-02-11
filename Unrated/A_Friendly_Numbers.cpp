// Problem Link https://codeforces.com/contest/2197/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

int digitSum(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void solve(){
    int n;
    cin >> n;
    int count = 0;
    for (int i = n + 1; i < n + 100; i++){
        if((i - digitSum(i)) == n)    count++;
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}