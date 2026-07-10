// Problem Link - https://codeforces.com/problemset/problem/1878/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

bool search(vector<int>&v,int k){
    for(auto it:v) if(it==k) return true;
    return false;
}

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &it:v) cin >> it;
    if(search(v,k)) cout << "YES\n";
    else cout << "NO\n";
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