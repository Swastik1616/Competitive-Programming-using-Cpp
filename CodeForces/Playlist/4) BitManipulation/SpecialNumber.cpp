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
        ll ans = 0;
        int i = 0;
        while(k>0){
            int b = k%2;
            if(b==1) ans += modExp(n,i,MOD);
            i++;
            k/=2;
        }
        cout << ans << "\n";
    }
    return 0;
}