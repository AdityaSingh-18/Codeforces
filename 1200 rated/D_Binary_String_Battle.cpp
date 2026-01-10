// Problem Link https://codeforces.com/contest/2123/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int oneCount = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '1'){
            oneCount++;
        }
    }
    if(oneCount <= k || k > n / 2){
        cout << "Alice\n";
    }
    else    cout << "Bob\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

Alice can win in 1st turn if the number of 1's in the string are less than or equal to k 
because then he will convert all 1's to 0.
Alice can also win if the value of k is more than half of string length.
Thats because he can choose the subsequence in such a way that at one instance the array
will be divided into two half by 1 and because Bob can only choose a substring the 1 will
be included in the substring and he will be able to only change k - 1 0's to 1. While Alice
can then easily choose a subsequence and convert all remianing 1's to 0.
Time Complexity: O(n)
Space Complexity: O(n)

*/