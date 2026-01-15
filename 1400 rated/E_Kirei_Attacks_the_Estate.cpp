// Problem Link https://codeforces.com/contest/2114/problem/E

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(vector<ll> &a, vector<ll> line[], vector<ll> &mx, vector<ll> &mn, int t, int f){
	for(int i : line[t])
	{
		if(i == f)    continue;
		mx[i] = max(a[i] - mn[t], a[i]);
		mn[i] = min(a[i] - mx[t], a[i]);
		dfs(a, line, mx, mn, i, t);
	}
}

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n), mx(n), mn(n), line[n];
    for(auto &i : a)    cin >> i;
    int u, v;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        line[u - 1].push_back(v - 1);
        line[v - 1].push_back(u - 1);
    }
    mx[0] = a[0];
    mn[0] = a[0];
    dfs(a, line, mx, mn, 0, -1);
    for(int i = 0; i < n; i++){
        cout << mx[i] << " \n"[i == n - 1];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}