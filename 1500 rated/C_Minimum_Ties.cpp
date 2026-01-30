// Problem Link https://codeforces.com/contest/1487/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
		if (n % 2 == 0 && i % 2){
            cout << "0 ";
        }
		for (int j = ((n % 2 == 0 && i % 2) ? i + 2 : i + 1) ; j <= n; j++){
            if((j - i) % 2)     cout << "1 ";
            else     cout << "-1 ";
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