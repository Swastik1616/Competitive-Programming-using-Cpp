// Problem Link - https://codeforces.com/problemset/problem/1858/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c&1){ // means c is odd
        if(b>a) cout << "Second\n";
        else cout << "First\n";
    }
    else{
        if(a>b) cout << "First\n";
        else cout << "Second\n";
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