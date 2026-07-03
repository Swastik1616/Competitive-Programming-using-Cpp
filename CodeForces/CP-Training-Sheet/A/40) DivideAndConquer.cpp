// Problem Link - https://codeforces.com/contest/2241/problem/A
 
#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
 
void solve(){
        int a,b;
        cin >> a >> b;
        if(a%b==0) cout << "YES\n";
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
    
    return 0;
}