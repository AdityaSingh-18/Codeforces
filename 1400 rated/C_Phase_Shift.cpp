// Problem Link https://codeforces.com/contest/1735/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> isVisited(26), isConnected(26);
    unordered_map<int, int> connect;
    int used = 0;
    for (int i = 0; i < n; i++){
        int k = s[i] - 'a';
        if(!isVisited[k]){
            for (int j = 0; j < 26; j++){
                if(!isConnected[j] && k != j){
                    int cycleTail = j;
                    while(connect.count(cycleTail)){
                        cycleTail = connect[cycleTail];
                    }
                    if(cycleTail != k || used == 25){
                        isVisited[k] = 1;
                        isConnected[j] = 1;
                        connect[k] = j;
                        used++;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << (char)(connect[s[i] - 'a'] + 97);
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}