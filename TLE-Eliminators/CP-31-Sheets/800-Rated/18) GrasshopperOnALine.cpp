// Problem Link - https://codeforces.com/problemset/problem/1837/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int x,k;
    cin >> x >> k;
    if(x%k){
        cout << "1\n" << x << "\n";
    }
    else{
        cout << "2\n" << x-1 << " " << 1 << "\n";
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