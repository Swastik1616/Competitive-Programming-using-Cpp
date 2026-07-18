// Problem Link - https://codeforces.com/problemset/problem/1845/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n,k,x;
    cin >> n >> k >> x;
    if(x!=1){
        cout << "YES\n";
        cout << n << "\n";
        for(int i=1;i<=n;i++) cout << 1 << " ";
        cout << "\n";
    }
    else{
        if(k==1 || (k==2 && n&1)) cout << "NO\n";
        else if(!(n&1)){
            cout << "YES\n";
            cout << n/2 << "\n";
            for(int i=1;i<=n/2;i++) cout << 2 << " ";
            cout << "\n";
        }
        else{
            cout << "YES\n";
            cout << (n-3)/2 + 1 << "\n";
            for(int i=1;i<=(n-3)/2;i++) cout << 2 << " ";
            cout << 3 << "\n";
        }
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