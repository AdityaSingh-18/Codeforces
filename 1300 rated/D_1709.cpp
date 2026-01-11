// Problem Link https://codeforces.com/contest/2121/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &i : a)    cin >> i;
    for (int &i : b)    cin >> i;
    vector<int> one, two, three;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - i; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                one.push_back(j + 1);
            }
            if(b[j] > b[j + 1]){
                swap(b[j], b[j + 1]);
                two.push_back(j + 1);
            }
        }
    }
    for (int i = 0; i < n; i++){
        if(a[i] > b[i]){
            three.push_back(i + 1);
        }
    }
    cout << one.size() + two.size() + three.size() << "\n";
    for (int i = 0; i < one.size(); i++){
        cout << "1 " << one[i] << "\n";
    }
    for (int i = 0; i < two.size(); i++){
        cout << "2 " << two[i] << "\n";
    }
    for (int i = 0; i < three.size(); i++){
        cout << "3 " << three[i] << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}