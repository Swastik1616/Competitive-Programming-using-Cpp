// Problem Link - https://codeforces.com/problemset/problem/1914/D

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int,int>> 

void solve(){
    int n;
    cin >> n;

    vi a(n),b(n),c(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;
    for(auto &it:c) cin >> it;

    vpi ap,bp,cp;
    for(int i=0;i<n;i++){
        ap.push_back({a[i],i});
        bp.push_back({b[i],i});
        cp.push_back({c[i],i});
    }

    sort(ap.rbegin(),ap.rend());
    sort(bp.rbegin(),bp.rend());
    sort(cp.rbegin(),cp.rend());

    int ans = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(ap[i].ss!=bp[j].ss && ap[i].ss!=cp[k].ss && bp[j].ss!=cp[k].ss) 
                    ans = max(ans,ap[i].ff+bp[j].ff+cp[k].ff);
            }
        }
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