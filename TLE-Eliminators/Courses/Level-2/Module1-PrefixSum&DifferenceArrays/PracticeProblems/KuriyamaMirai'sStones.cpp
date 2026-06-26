// Problem Link - https://codeforces.com/contest/433/problem/B
// maza aaya

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v1(n),v2(n),pre1(n),pre2(n);
    for(auto &it:v1) cin >> it;
    
    v2 = v1;
    sort(v2.begin(),v2.end());

    pre1[0] = v1[0];
    pre2[0] = v2[0];
    for(int i=1;i<n;i++){
        pre1[i] = pre1[i-1] + v1[i]; // prefix sum of given array
        pre2[i] = pre2[i-1] + v2[i]; // prefix sum of sorted array
    }

    ll m;
    cin >> m;
    while(m--){
        ll t,l,r;
        cin >> t >> l >> r;
        l--;r--;
        if(t==1){ // just give prefix sum of normal array from range l to r
            (l==0) ? cout << pre1[r] << "\n" : cout << pre1[r] - pre1[l-1] << "\n";
        }
        else if(t==2){ // prefix sum of sorted array from l to r
            (l==0) ? cout << pre2[r] << "\n" : cout << pre2[r] - pre2[l-1] << "\n";
        }
    }

    return 0;
}