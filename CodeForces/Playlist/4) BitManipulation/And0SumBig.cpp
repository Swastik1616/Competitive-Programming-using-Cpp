#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

ll modExp(ll a,ll b,ll m){
    if(b==0) return 1;
    if(b==1) return a % m;

    ll x = modExp(a,b/2,m);
    ll ans = 0;

    if(b%2==0) ans = ((x % m)*(x % m)) % m;
    else {
        ans = ((x % m)*(x % m)) % m;
        ans = ((ans % m)*(a % m)) % m;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        cout << modExp(n,k,MOD) << "\n";
    }
    
    /* bcoz k is small we can directly run a for loop
        long long ans = 1;
        for(ll i=1;i<=k;i++){
            ans = ((ans%1000000007) * (n%1000000007))%1000000007;
        }
    */
    return 0;
}