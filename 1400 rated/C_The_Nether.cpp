// Problem Link https://codeforces.com/contest/2133/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
	cin >> n;
	vector<pair<int, int>> a(n + 1), ans;
	for(int i = 1; i <= n; i++) {
		cout << "? " << i << ' ' << n;
		for(int j = 1; j <= n; j++){
            cout << ' ' << j;
        }
        cout << "\n";
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin() + 1, a.end(), greater<>());
	ans.push_back(a[1]);
	for(int i = 2; i <= n; i++) {
		cout << "? " << ans.back().second << " 2 " << ans.back().second << ' ' << a[i].second << "\n";
		cin >> x;
		if(x == 2)        ans.push_back(a[i]);
	}
	cout << "! " << ans.size();
	for(int i = 0; i < ans.size(); i++){
        cout << ' ' << ans[i].second;
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