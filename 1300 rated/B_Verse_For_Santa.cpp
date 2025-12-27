// Problem Link https://codeforces.com/contest/1279/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    vector<pair<int, int>> curMax(n + 1);
    int sum = 0, removeElement = 0, canRemove = 1, j = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if(curMax[i].first < a[i]){
            curMax[i + 1] = {a[i], i + 1};
        }
        else    curMax[i + 1] = {curMax[i].first, curMax[i].second};
        if((sum - removeElement) > k){
            if(canRemove){
                removeElement = curMax[i + 1].first;
                j = curMax[i + 1].second;
                canRemove = 0;
            }
            else    break;
        }
    }
    cout << j << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

First Try 

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    vector<int> prefSum(n + 1);
    vector<pair<int, int>> curMax(n + 1);
    for (int i = 0; i < n; i++){
        prefSum[i + 1] = prefSum[i] + a[i];
        if(curMax[i].first < a[i]){
            curMax[i + 1] = {a[i], i + 1};
        }
        else    curMax[i + 1] = {curMax[i].first, curMax[i].second};
    }
    int removeElement = 0, canRemove = 1, j = 0;
    for (int i = 1; i <= n; i++){
        if((prefSum[i] - removeElement) > k){
            if(canRemove){
                removeElement = curMax[i].first;
                j = curMax[i].second;
                canRemove = 0;
            }
            else    break;
        }
    }
    cout << j << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

*/