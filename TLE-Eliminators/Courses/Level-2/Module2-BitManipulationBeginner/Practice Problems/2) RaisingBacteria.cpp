// Problem Link - https://codeforces.com/problemset/problem/579/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    while(n){
        if(n%2) ans++;
        n/=2;
    }
    cout << ans << "\n";
}

void TCs(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //TCs();
    solve();
    
    return 0;
}