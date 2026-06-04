// Problem Link - https://codeforces.com/problemset/problem/912/B

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

// ll binExp(ll a,ll b){ // TC = O(logb)
//     if(b==0) return 1;
//     if(b==1) return a;

//     ll x = binExp(a,b/2);
//     ll ans = 0;
    
//     if(b%2==0) ans = x*x;
//     else ans = x*x*a;

//     return ans;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    if(k==1) cout << n << "\n";
    else{
        int b = 0;
        while(n>0){
            b++;
            n/=2;
        }
        cout << (1LL << b) - 1 << "\n";    }    
    return 0;
}