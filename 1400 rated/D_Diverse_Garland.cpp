// Problem Link https://codeforces.com/contest/1108/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++){
        if(i < n - 2 && s[i] == s[i + 1] && s[i] == s[i + 2]){
            if(s[i] == 'R')     s[i + 1] = 'G';
            else    s[i + 1] = 'R'; 
            count++;
            i++;
        }
        else if(s[i] == s[i + 1]){
            count++;
            if(s[i] == 'R'){
                if(i != 0){
                    if(s[i - 1] == 'B')    s[i] = 'G';
                    else    s[i] = 'B';
                }
                else    s[i] = 'G';
            }
            else if(s[i] == 'G'){
                if(i != 0){
                    if(s[i - 1] == 'R')    s[i] = 'B';
                    else    s[i] = 'R';
                }
                else    s[i] = 'B';
            }
            else{
                if(i != 0){
                    if(s[i - 1] == 'G')    s[i] = 'R';
                    else    s[i] = 'G';
                }
                else    s[i] = 'R';
            }
        }
    }
    cout << count << "\n";
    cout << s << "\n";
}

signed main(){
    solve();
}