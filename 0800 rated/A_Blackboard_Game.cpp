// Problem Link https://codeforces.com/contest/2123/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    if(n % 4 != 0)   cout << "Alice\n";
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

Lets understand with some examples:
Suppose n is 3 so numbers are 0, 1, 2.
If Alice choose 0 then whichever number Bob chooses their sum wont give 3 on doing modulous 4.
Now if n is 4 so numbers are 0, 1, 2, 3.
Now if Alice chooses 1 Bob can choose 2 and if Alice choose 0 Bob can choose 3.
No when n is a multiple of 4 then there will always be a number from 0 to n - 1, which Bob can
choose to make the sum give 3 for modulous 4.
Time Complexity: O(1)
Space Complexity: O(1)

*/