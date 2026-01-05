// Problem Link https://codeforces.com/contest/1933/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, l;
    cin >> a >> b >> l;
	set<int> s;
	for (int i = 1; l % i == 0; i *= a){
        int y = l / i;
        for (int j = 1; y % j == 0; j *= b){
		    s.insert(y / j);
        }
    }
	cout << s.size() << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}