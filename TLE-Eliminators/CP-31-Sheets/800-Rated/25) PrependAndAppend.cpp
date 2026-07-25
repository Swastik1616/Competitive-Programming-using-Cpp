// Problem Link - https://codeforces.com/problemset/problem/1791/C

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n-1;

    int ans = n;
    // while(l<=r){
    //     if((s[l]=='0' && s[r]=='1') || (s[l]=='1' && s[r]=='0')){
    //         ans -= 2;
    //     }
    //     else break;
    //     l++;
    //     r--;
    // }

    while(l<=r){
        if(s[l]!=s[r]) ans -= 2;
        else break;
        l++;
        r--;
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

    TCs();
    //solve();
    
    return 0;
}