/*
Problem - Given an array A of n elements and q queries of
two llegers L and R in each of them, calculate the value
of A[L] + 2*A[L+1] + 3*A[L+2] + ..... + (L-R+1)*A[R];
1 <= L < R <= N
*/ 

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void bruteForce(vector<ll> &v,ll l, ll r){
        l--;r--;
        ll x = 1;
        ll ans = 0;
        for(ll i=l;i<=r;i++){
            ans += x*v[i];
            x++;
        }
        cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin >> n >> q;
    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++) cin >> v[i];

    vector<ll> pre1(n+1,0),pre2(n+1,0);
    for(ll i=1;i<=n;i++){
        pre1[i] = pre1[i-1] + v[i]; // normal prefix sum array
        pre2[i] = pre2[i-1] + (i*v[i]);
    }   

    while(q--){
        ll l,r;
        cin >> l >> r;
        //bruteForce(v,l,r);
        cout << (pre2[r] - pre2[l-1]) - ((l-1)*(pre1[r] - pre1[l-1])) << "\n";
        
    }
    return 0;
}