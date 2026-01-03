// Problem Link https://codeforces.com/contest/2119/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a == b){
        cout << 0 << "\n";
        return;
    }
    if (a > b){
        if (a % 2 && (a - b) == 1)   cout << y << "\n";
        else    cout << -1 << "\n";
    }
    else{
        ll cost = 0;
        if (x > y){
            ll n = (b - a + 1) / 2 ;
            if (a % 2){
                cost = n * x + (b - a - n) * y;
            }
            else    cost = (b - a - n) * x + n * y;
        }
        else{
            cost = (b - a) * x;
        }
        cout << cost << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

The XOR operations of a number with 1 increases its value by 1 if the number is even and decreases by 1
if the number is odd.So we cannot decrease the value of a by 2 or more so its impossible to make a equal b
in this case.Also the number should be even to decrease its value by 1 using XOR otherwise it is impossible
to decrease the value of a by 1 if its odd.
And if the number a is less than b we can use a plus 1 operation or XOR operation or both depending on the 
cost of both operation.
For odd values we have to use plus 1 operation no matter the cost but if a is even we can use XOR operation
if it has less cost than plus 1 operation.
Time Complexity: O(1)
Space Complexity: O(1)

*/