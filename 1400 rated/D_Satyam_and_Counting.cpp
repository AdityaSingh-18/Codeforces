// Problem Link http://codeforces.com/contest/2009/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
	set<int> zero, one;
    int x, y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
	    if(y == 0)    zero.insert(x);
	    else    one.insert(x);
    }
	int numZero = zero.size();
    int numOne = one.size();
	int c = 0;
	for(auto it : zero){
		auto z = one.find(it);
		if(z != one.end()){
			c += numZero - 1;
		}
		int x = it - 1, y = it + 1;
		if (one.find(x) != one.end() && one.find(y) != one.end()){
			c++;
		}
	}
	for(auto it : one){
		int x = it - 1, y = it + 1;
		if(zero.find(x) != zero.end() && zero.find(y) != zero.end()){
			c++;
		}
		auto z = zero.find(it);
		if (z != zero.end()){
			c += numOne - 1;
		}
	}
	cout << c << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}