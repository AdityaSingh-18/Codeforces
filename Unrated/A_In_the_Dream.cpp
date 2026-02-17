// Problem Link https://codeforces.com/contest/2136/problem/A

#include<bits/stdc++.h>
using namespace std;

bool check(int a,int b){
    if(max(a, b) > (min(a, b) * 2 + 2))     return false;
	else    return true;
}

void solve(){
    int a, b, c, d;
	cin >> a >> b >> c >> d;
    if(a > c || b > d){
        cout<<"NO\n"; 
        return;
    }
	if(check(a, b) && check(c - a, d - b))	   cout<<"YES\n";
	else      cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
        solve();
    }
}