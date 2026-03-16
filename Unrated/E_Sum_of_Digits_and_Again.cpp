// Problem Link https://codeforces.com/contest/2204/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1) { 
        cout << s << "\n"; 
        return;
    }
    int total = 0;
    vector<int> freq(10);
    for (int i = 0; i < n; i++) {
        total += s[i] - '0';
        freq[s[i] - '0']++;
    }
    for (int i = 1; i <= 9 * n; i++) {
        string y = "";
        vector<int> freqY(10);
        int sumY = 0, cur = i;
        while (cur > 9) {
            string num = to_string(cur);
            y += num;
            int digitSum = 0;
            for (char c : num) {
                digitSum += c - '0';
                freqY[c - '0']++;
            }
            sumY += digitSum;
            cur = digitSum;
        }
        y += cur + '0';
        freqY[cur]++;
        sumY += cur;
        if (sumY + i != total)     continue;
        int flag = 1;
        for (int i = 0; i < 10; i++) {
            if (freqY[i] > freq[i]) { 
                flag = 0; 
                break; 
            }
        }
        if (!flag)    continue;
        int remCount = n - y.size();
        if (remCount < 2)    continue;
        vector<int> remFreq(10);
        for (int i = 0; i < 10; i++){
            remFreq[i] = freq[i] - freqY[i];
        }
        string x = "";
        for (int i = 9; i >= 1; i--) {
            if (remFreq[i] > 0) {
                x += i + '0';
                remFreq[i]--;
                break;
            }
        }
        if (x.empty())    continue;
        for (int i = 0; i <= 9; i++){
            for (int j = 0; j < remFreq[i]; j++){
                x += (char)(i + '0');   
            }
        }
        cout << x << y << "\n";
        return;
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}