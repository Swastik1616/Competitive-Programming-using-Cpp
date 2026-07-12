// Problem Link - https://codeforces.com/problemset/problem/1866/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    int m = INT_MAX;
    for(int i=0;i<n;i++){
        cin >> v[i];
        m = min(m,abs(v[i]));
    }
    cout << m;
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