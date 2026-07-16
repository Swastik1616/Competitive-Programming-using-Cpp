// Problem Link - https://codeforces.com/problemset/problem/1857/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;

    vector<int> odd,even;
    for(auto it:v){
        if(it&1) odd.push_back(it);
        else even.push_back(it);
    }

    if(odd.size()&1) cout << "NO\n";
    else cout << "YES\n";
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

    TCs();
    //solve();
    
    return 0;
}