// Problem Link https://codeforces.com/contest/2111/problem/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<vector<set<int>>> a(3, vector<set<int>> (3));
	for (int i = 0; i < q; i++){
		char x, y;
		cin >> x >> y;
		a[x - 'a'][y - 'a'].insert(i);
	}
	for (int i = 0; i < n; i++){
		if (s[i] == 'a')	continue;
		if (s[i] == 'b'){
			if (!a[1][0].empty()){
				a[1][0].erase(a[1][0].begin());
				s[i] = 'a';
				continue;
			}
			if (!a[1][2].empty()){
				auto j = *a[1][2].begin();
				auto lb = a[2][0].lower_bound(j);
				if (lb != a[2][0].end()){
					a[1][2].erase(j);
					a[2][0].erase(lb);
					s[i] = 'a';
					continue;
				}
			}
		}
		if (s[i] == 'c'){
			if (!a[2][0].empty()){
				a[2][0].erase(a[2][0].begin());
				s[i] = 'a';
				continue;
			}
			if (!a[2][1].empty()){
				auto j = *a[2][1].begin();
				a[2][1].erase(j);
				s[i] = 'b';
				auto lb = a[1][0].lower_bound(j);
				if (lb != a[1][0].end()){
					a[1][0].erase(lb);
					s[i] = 'a';
				}
			}
		}
	}
	cout << s << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}