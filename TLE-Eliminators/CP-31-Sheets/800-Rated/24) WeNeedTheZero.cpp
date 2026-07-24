// Problem Link - https://codeforces.com/problemset/problem/1805/A

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
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        ans = ans ^ x;
    }
    if(n&1) cout << ans << "\n";
    else{
        if(ans==0) cout << ans << "\n";
        else cout << "-1\n";
    }
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