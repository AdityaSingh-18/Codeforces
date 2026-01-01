// Problem Link https://codeforces.com/contest/1313/problem/C1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b;
    for (auto &i : a)   cin >> i;
    int maxSum = 0, index = 0;
    for (int i = 0; i < n; i++){
        int currMin = a[i], sum = a[i], j = i - 1;
        while(j >= 0){
            currMin = min(currMin, a[j]);
            sum += currMin;
            j--;
        }
        currMin = a[i], j = i + 1;
        while(j < n){
            currMin = min(currMin, a[j]);
            sum += currMin;
            j++;
        }
        if(maxSum < sum){
            maxSum = sum;
            index = i;
        }
    }
    int j = index - 1, currMin = a[index];
    while(j >= 0){
        currMin = min(currMin, a[j]);
        b.push_back(currMin);
        j--;
    }
    j = index + 1, currMin = a[index];
    reverse(b.begin(), b.end());
    b.push_back(a[index]);
    while(j < n){
        currMin = min(currMin, a[j]);
        b.push_back(currMin);
        j++;
    }
    for (auto &i : b)   cout << i << " ";
    cout << "\n";
}

signed main(){
    solve();
}