// Problem Link - https://codeforces.com/contest/2254/problem/C1
//WA
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

void solve(){
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<n-2;i++){
        char temp = a[i];
        a[i] = a[i+2];
        a[i+2] = temp;
        if(a==b) break;
    }
    if(a==b) cout << "YES\n";
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