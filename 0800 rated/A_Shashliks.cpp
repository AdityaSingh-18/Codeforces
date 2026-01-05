// Problem Link https://codeforces.com/contest/2113/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mealCount(int initialTemp, int temp, int drop){
    int count = 0;
    if(initialTemp >= temp){
        count = (initialTemp - temp) / drop + 1;
    }
    return count;
}

void solve(){
    int initialTemp, tempA, tempB, dropA, dropB;
    cin >> initialTemp >> tempA >> tempB >> dropA >> dropB; 
    int count = 0;
    if(dropA < dropB){
        count += mealCount(initialTemp, tempA, dropA);
        initialTemp -= (dropA * count);
        count += mealCount(initialTemp, tempB, dropB);
    }
    else{
        count += mealCount(initialTemp, tempB, dropB);
        initialTemp -= (dropB * count);
        count += mealCount(initialTemp, tempA, dropA);
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
