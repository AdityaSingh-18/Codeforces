// Problem Link https://codeforces.com/contest/2181/problem/H

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    vector<int> a(3), b(3);
    for(int i = 0; i < 3; i++){
		cin>> a[i];
    }
	int n;
	cin >> n;
	for(int i = 0; i < 3; i++)
	{
		int cuts = gcd(a[i], n);
		b[i] = cuts - 1;
		n /= cuts;
	}
	if(n == 1){
		for(int i = 0; i < 3; i++){
			cout << b[i] << " \n"[i == 2];
        }
	}
	else	cout << "-1\n";
}

signed main(){
    solve();
}