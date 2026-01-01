// Problem Link https://codeforces.com/contest/2125/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    string F, T, N, rest;
    for (char c : s){
        if (c == 'F') F.push_back(c);
        else if (c == 'T') T.push_back(c);
        else if (c == 'N') N.push_back(c);
        else rest.push_back(c);
    }
    string result = rest + T + F + N;
    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We have to avoid having FFT or NTT so a easy way is to put all T,F,N together and rest of the character
seperatly.
This avoids FFT or NTT because FFT requires 2 F followed by T,and NTT requires N followed by 2 T,
Time Complexity: O(n)
Space Complexity: O(n)

*/